#include <iostream>

struct Player{
    int price;
    std::string name;
};

int main() {
    int test_cases, num_of_players, max_price, max_index;

    std::cin >> test_cases;
    for (int test_case = 1; test_case <= test_cases; test_case++) {
        max_price = 0;
        std::cin >> num_of_players;
        struct Player players[num_of_players];
        for (int i = 0; i < num_of_players; i++) {
            std::cin >> players[i].price;
            std::cin >> players[i].name;
            if (players[i].price > max_price) {
                max_price = players[i].price;
                max_index = i;
            }
        }
        std::cout << players[max_index].name << std::endl;
    }
    return 0;
}