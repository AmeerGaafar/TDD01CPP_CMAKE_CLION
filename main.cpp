#include <iostream>
#include "TennisGame.h"

int main() {
    TennisGame game("Player1","Player2");
    game.wonPoint("player1");
    std::cout << "Score now is: " << game.getScore() << std::endl;
    game.wonPoint("player2");
    std::cout << "Score now is: " << game.getScore() << std::endl;
    game.wonPoint("player1");
    std::cout << "Score now is: " << game.getScore() << std::endl;
    return 0;
}
