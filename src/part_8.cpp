//
// Created by xjh2000 on 2022/12/7
//


#include <gtest/gtest.h>

void arrayBackMove(int arr[], int arrLen, int moveLen) {
    if (moveLen <= 0) return;
    int last = arr[arrLen - 1];
    for (int i = arrLen - 2; i >= 0; --i)
        arr[i + 1] = arr[i];
    arr[0] = last;
    arrayBackMove(arr, arrLen, moveLen - 1);
}

TEST(Part8_Test, ArrayBackMove) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrayBackMove(a, 10, 3);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ((10 - 3 + i) % 10, a[i]);
    }
}


int myStringCompare(const char *str1, const char *str2) {
    for (int i = 0; str1[i] != '\0'; ++i) {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
    }
    return 0;
}


TEST(Part8_Test, MyStrcmp) {
    char str1[20] = "Hello World!";
    char str2[20] = "Hallo World!";
    EXPECT_EQ(4, myStringCompare(str1, str2));
}