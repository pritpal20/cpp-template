
#include <iostream>
#include <string>

#include "gtest/gtest.h"

TEST(AssertAndExpect, AssertFailIsFatal) {
  ASSERT_TRUE(true);
  std::cout << "This line won't be executed!" << std::endl;
  EXPECT_TRUE(true);
}

TEST(AssertAndExpect, ExpectFailIsNotFatal) {
  EXPECT_TRUE(true);
  std::cout << "This line will be executed!" << std::endl;
  EXPECT_TRUE(true);
}