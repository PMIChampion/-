#include <gtest/gtest.h> 
#include "../my_solution.h"    

TEST(VowelCounterTests, BasicTest) {
    EXPECT_EQ(countVowels("hello"), 2);

    EXPECT_EQ(countVowels("world"), 1);

    EXPECT_EQ(countVowels(""), 0);

    EXPECT_EQ(countVowels("AEIOUaeiou"), 10);

    EXPECT_EQ(countVowels("bcdfg"), 0);
}

TEST(VowelCounterTests, CaseSensitivity) {
    EXPECT_EQ(countVowels("HeLLo"), 2);
    EXPECT_EQ(countVowels("WOrLD"), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);  
    return RUN_ALL_TESTS();               
}
