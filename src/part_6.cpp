//
// Created by xjh on 9/7/2022.
//

#include <gtest/gtest.h>
#include <cmath>


void bubbleSortDesc(int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = len - 1; j > i; --j) {
            if (arr[j - 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }

        }
    }
}

TEST(Part6_Test, BubbleSort) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    bubbleSortDesc(a, 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(9 - i, a[i]);
    }
}
