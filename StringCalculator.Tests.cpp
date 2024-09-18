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


TEST(StringCalculatorAddTests, ExpectZeroForSingleZero) {
    int expectedresult = 0;
    const char* input = "0";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumForTwoNumbers) {
    int expectedresult = 3;
    const char*  input = "1,2";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumWithNewlineDelimiter) {
    int expectedresult = 6;
    const char*  input = "1\n2,3";
    int result =Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, IgnoreNumbersGreaterThan1000) {
    int expectedresult = 1;
    const char*  input = "1,1001";
    int result =Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, ExpectSumWithCustomDelimiter) {
    int expectedresult = 3;
    const char*  input = "//;\n1;2";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, Sumofnumberwithcommadelimiter) {
   int expectedresult = 113;
    const char*  input = "1,112";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, numberwithcharacter) {
       int expectedresult = 1000;
    const char*  input = "1,abchd,999";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, Emptystring) {
        int expectedresult = 0;
    const char*  input = "";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, Negativeinput) {
       int expectedresult = -1;
    const char*  input = "-8,-2";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}

TEST(StringCalculatorAddTests, Numberwithnegativesymbol) {
    int expectedresult = 3;
    const char*  input = "1,-,2";
    int result = Addition_NumUsingString(input);
    ASSERT_EQ(result, expectedresult);
}


