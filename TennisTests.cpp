#include "gtest/gtest.h"
#include "TennisGame.h"

TEST(TennisTests, InitialScoreIsLoveAll) {
    TennisGame game("Player1","Player2");
    ASSERT_EQ("Love-All",game.getScore());
}

