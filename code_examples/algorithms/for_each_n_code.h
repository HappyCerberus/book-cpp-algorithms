std::vector<Player> final_ranking = get_rankings();
std::ranges::sort(final_ranking, std::greater<>(), &Player::score);

std::for_each_n(std::execution::par_unseq, 
	final_ranking.begin(), 
	std::min(MAIN_SEATS, final_ranking.size()),
	send_invitation_to_main_tournament);

auto it = final_ranking.begin();
uint32_t page = 0;
while (it != final_ranking.end()) {
	size_t cnt = std::min(PAGE_SIZE, size_t(final_ranking.end() - it));
	std::for_each_n(it, cnt, [page](const Player& p) {
		store_final_score(page, p.display_name, p.score);
	});
	page++;
	it += cnt;
}