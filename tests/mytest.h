#ifndef MYTEST_H
#define MYTEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(fnci, num1) {
    ASSERT_DOUBLE_EQ(fun(1,4,4,0),-2);
    ASSERT_DOUBLE_EQ(fun(2, 4, 2, 0), -1);
    ASSERT_DOUBLE_EQ(fun(1, -6, 9, 1), 3);
}

TEST(funci, num2) {
   ASSERT_DOUBLE_EQ(fun(1, 1, -2, 0), 1);
    ASSERT_DOUBLE_EQ(fun(1, -3, -18,0 ), 6);
    ASSERT_DOUBLE_EQ(fun(0, -3, -18,0 ), -6);
}

TEST(funci, negative) {
   ASSERT_DOUBLE_EQ(fun(1, 2, 50, 0), 0.00001);
}

#endif // MYTEST_H
