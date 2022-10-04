//
// Created by xjh on 9/7/2022.
//

#include <gtest/gtest.h>
#include <cmath>

/**
 * 最大公约数 -- 辗转相除
 * @param a
 * @param b
 * @return 最大公约数
 */
int greatestCommonDivisor(int a, int b) {
    // make sure a >= b
    if (a < b) return greatestCommonDivisor(b, a);
    // if prev a % b = 0 , mean a is the
    if (b == 0) return a;
    return greatestCommonDivisor(a % b, b);
}

TEST(Part5_Test, GreatestCommonDivisor) {
    EXPECT_EQ(7, greatestCommonDivisor(35, 49));
}

/**
 * 最小公倍数 - 大数累加 与小数相除看能相约？
 * @param a
 * @param b
 * @return 最小公倍数
 */
int lowestCommonMultiple(int a, int b) {
    if (a < b)return lowestCommonMultiple(b, a);
    int result = a;
    while (result % b != 0) {
        result += a;
    }
    return result;
}

TEST(Part5_Test, LowestCommonMultiple) {
    EXPECT_EQ(245, lowestCommonMultiple(35, 49));
}

/**
 * 使用牛顿迭代法求平方根 精度为 1e-5
 * @param a
 * @return 平方根
 */
float iterationSqrt(float a) {
    float ans = a;
    while (fabsf(ans * ans - a) >= 1e-5) {
        ans = (ans + a / ans) / 2;
    }
    return ans;
}

TEST(Part5_Test, IterationSqrt) {
    EXPECT_TRUE((iterationSqrt(2) - 1.41421f) < 1e-5);
}