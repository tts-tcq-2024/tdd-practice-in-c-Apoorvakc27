#include <gtest/gtest.h>
#include "StringCalculator.h"

TEST(StringCalculatorAddTests, ExpectZeroForEmptyInput) {
    int expectedresult = 0;
    const char* input = "Hello, world!";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, NULL_Input) {
    int expectedresult = -1;
    const char*  input = NULL;
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}
