struct Card {
	unsigned index;
    
friend std::ostream& operator << (std::ostream& s, const Card& card) {
	static constexpr std::array<const char*, 13> ranks =
		{"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
		 "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	static constexpr std::array<const char*, 4> suits = 
		{"Hearts", "Diamonds", "Clubs", "Spades"};

	if (card.index >= 52)
		throw std::domain_error("Card index has to be in the range 0..51");

	s << ranks[card.index%13] << " of " << suits[card.index/13];
	return s;
}

};

int main() {

std::vector<Card> deck(52, Card{});
std::ranges::generate(deck, [i = 0u]() mutable { return Card{i++}; });
// deck == {Ace of Hearts, Two of Hearts, Three of Hearts, Four...}

std::random_device rd;
std::mt19937 gen{rd()};

std::ranges::shuffle(deck, gen);
// deck == { random order }

}
