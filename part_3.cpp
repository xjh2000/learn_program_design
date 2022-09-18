//
// Created by xjh on 9/7/2022.
//

#include <gtest/gtest.h>
#include <cmath>

double calculateIncreasePercent(int totalYears, double oneYearIncreasePercent) {
    return pow((1 + oneYearIncreasePercent), totalYears);
}

TEST(Part3_Test, CalculateIncreasePercent) {
    EXPECT_EQ(1, calculateIncreasePercent(1, 0));
    EXPECT_EQ(1.1, calculateIncreasePercent(1, 0.1));
    EXPECT_TRUE((calculateIncreasePercent(10, 0.07) - 1.96715) < 0.00001);
}

void replaceChars(char str[], int len) {
    for (int i = 0; i < len; ++i) {
        str[i] += 4;
    }
}

TEST(Part3_Test, ReplaceChars) {
    char str[] = "China";
    replaceChars(str, 5);
    EXPECT_STREQ("Glmre", str);
}