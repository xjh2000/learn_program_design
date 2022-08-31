//
// Created by xjh on 8/31/2022.
//

#include <gtest/gtest.h>

bool isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    return false;
}

TEST(Part2_Test, IsLeapYear) {
    EXPECT_TRUE(isLeapYear(2016));
    EXPECT_TRUE(isLeapYear(2000));
    EXPECT_FALSE(isLeapYear(2015));
}

int findMax(int numbers[], int len) {
    int max;
    max = numbers[0];
    for (int i = 1; i < len; ++i) {
        if (max < numbers[i]) {
            max = numbers[i];
        }
    }
    return max;
}

TEST(Part2_Test, FindMax) {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 20, 10};
    EXPECT_EQ(20, findMax(numbers, 10));
}