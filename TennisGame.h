#ifndef TDD01CPP_CMAKE_CLION_TENNISGAME_H
#define TDD01CPP_CMAKE_CLION_TENNISGAME_H
#include <string>
using namespace std;

class TennisGame{
private:
    int m_score1 = 0;
    int m_score2 = 0;
    string player1Name;
    string player2Name;

public:
    TennisGame(const string &player1Name, const string &player2Name);
    void wonPoint(string playerName);
    string getScore();
};
#endif //TDD01CPP_CMAKE_CLION_TENNISGAME_H
