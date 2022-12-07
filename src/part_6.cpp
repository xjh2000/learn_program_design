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


void selectSortDesc(int arr[], int len) {
    for (int i = 0; i < len - 1; ++i) {
        for (int j = i; j <= len - 1; ++j) {
            if (arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

        }
    }
}

TEST(Part6_Test, SelectSort) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    selectSortDesc(a, 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(9 - i, a[i]);
    }
}

// 题目 : 数组元素反转
/***
 * 数组元素反转
 * @param arr 数组
 * @param len 数组长度
 */
void reversedOrder(int arr[], int len) {
    for (int i = 0; i <= (len - 1) / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}


TEST(Part6_Test, ReversedOrder) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    reversedOrder(a, 10);
    for (int i = 0; i < 10; ++i) {
        EXPECT_EQ(9 - i, a[i]);
    }
}

int binarySearch(const int arr[], int len, int target) {
    int l = 0;
    int h = len - 1;
    while (l < h) {
        int mid = (l + h) / 2;
        arr[mid] < target ? l += 1 : h -= 1;
    }
    return arr[l] == target ? l : -1;
}


TEST(Part6_Test, BinarySearch) {
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    EXPECT_EQ(5, binarySearch(a, 10, 5));
}

void myStrcpy(const char *source, char *target) {
    int index = 0;
    while (source[index] != '\0') {
        target[index] = source[index];
        index++;
    }
    target[index] = '\0';
}


TEST(Part6_Test, MyStrcpy) {
    char str1[20] = "Hello World!";
    char str2[20];
    myStrcpy(str1, str2);
    for (int i = 0; str1[i] != '\0'; ++i) {
        EXPECT_EQ(str1[i], str2[i]);
    }
}