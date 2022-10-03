//
// Created by xjh on 9/7/2022.
//

#include <gtest/gtest.h>
#include <cmath>

/**
 * 暴力穷举平方根 结束条件 value/2
 * @param value 目标数值
 * @return 目标数值的平方根的整数部分
 */
int integerSqrt(int value) {
    if (value <= 1)
        return 1;
    for (int i = 0; i < value / 2; ++i) {
        if (i * i > value) {
            return i - 1;
        }
    }
    return -1;
}

TEST(Part4_Test, IntegerSqrt) {
    EXPECT_EQ(3, integerSqrt(10));
    EXPECT_EQ(33, integerSqrt(1091));
}

/**
 * 反转一个正整数 （个位变为第一位，第一位变个位）
 * @param number 正整数
 * @return 反转的整数
 */
int ReverseNumber(int number) {
    int reverseNumber = 0;
    while (number > 0) {
        reverseNumber *= 10;
        reverseNumber += number % 10;
        number /= 10;
    }
    return reverseNumber;
}

TEST(Part4_Test, ReverseNumber) {
    EXPECT_EQ(12345, ReverseNumber(54321));
    EXPECT_EQ(54321, ReverseNumber(12345));
}