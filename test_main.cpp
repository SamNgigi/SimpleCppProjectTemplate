#include <gtest/gtest.h>
#include "myfunc.hpp"

TEST(AddTest, PositiveNos) {
    EXPECT_EQ(3, add(1, 2));
    EXPECT_EQ(5, add(2, 3));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}