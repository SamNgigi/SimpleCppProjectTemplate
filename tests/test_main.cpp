#include <gtest/gtest.h>
#include "myfunc.hpp"
#include "example1/my_factorial.hpp"

TEST(AddTest, PositiveNos) {
    EXPECT_EQ(3, add(1, 2));
    EXPECT_EQ(5, add(2, 3));
}

TEST(FactorialTest, HandlesZeroInput){
    EXPECT_EQ(my_factorial(0), 1);
}

TEST(FactorialTest, HandlesPositiveInput){
    EXPECT_EQ(my_factorial(1), 1);
    EXPECT_EQ(my_factorial(2), 2);
    EXPECT_EQ(my_factorial(3), 6);
    EXPECT_EQ(my_factorial(8), 40320);

}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}