#include <vector>
#include <algorithm>
#include <iostream>
#include <execution>
#include <cassert>

inline constexpr const size_t MAIN_SEATS = 2;
inline constexpr const size_t PAGE_SIZE = 2;

struct Player {
    std::string display_name;
    std::string contact_email;
    uint32_t score;
};

std::vector<Player> get_rankings() {
    return {
        {"user1", "user1_email", 10},
        {"user2", "user2_email", 1},
        {"user3", "user3_email", 15},
        {"user4", "user4_email", 2}, 
    }; 
}

std::vector<Player> invitations;

void send_invitation_to_main_tournament(const Player& player) {
    invitations.push_back(player);
};

struct FinalScore {
    uint32_t page;
    std::string name;
    uint32_t score;
};

std::vector<FinalScore> final_score;

void store_final_score(uint32_t page, const std::string& name, uint32_t score) {
    final_score.push_back(FinalScore{page, name, score});
};


int main() {
#include "for_each_n_code.h"
assert(invitations[0].display_name == "user3");
assert(invitations[1].display_name == "user1");

assert(final_score[0].page == 0 && final_score[0].name == "user3");
assert(final_score[1].page == 0 && final_score[1].name == "user1");
assert(final_score[2].page == 1 && final_score[2].name == "user4");
assert(final_score[3].page == 1 && final_score[3].name == "user2");

std::cerr << ".";
}
