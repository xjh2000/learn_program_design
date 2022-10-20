//
// Created by xjh on 8/31/2022.
//

#include <gtest/gtest.h>


TEST(Part1_Test, SayHelloWorld) {
    // printf("hello world ! \n");
    EXPECT_STREQ("hello world", "hello world");
}

int thirdFindMax(int first, int second, int third) {
    int max = first > second ? first : second;
    return max > third ? max : third;
}

TEST(Part1_Test, ThirFindMax) {

    EXPECT_EQ(10, thirdFindMax(1, 2, 10));
    EXPECT_EQ(10, thirdFindMax(1, 10, 2));
    EXPECT_EQ(10, thirdFindMax(10, 2, 1));
    EXPECT_EQ(-1, thirdFindMax(-10, -2, -1));
}

