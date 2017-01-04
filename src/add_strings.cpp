/**
Given two non-negative numbers num1 and num2 represented as string, return the
sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to
integer directly.
*/
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include "leetcode.hpp"

static bool string2Number(const std::string& in_str, int* out_num) {
  auto num = 0;
  auto count_c = 0;

  *out_num = num;

  if (in_str.size() > 4) return false;

  std::for_each(in_str.rbegin(), in_str.rend(),
                [&num, &count_c](const char& c) {
                  if (c < '0' || c > '9') return false;
                  auto digit = static_cast<int>(c - '0');
                  num += std::pow(10, count_c++) * digit;
                });

  if (num > 5100) return false;

  *out_num = num;

  return true;
}

int AddStringProblem::addStrings(const std::string& str1,
                                 const std::string& str2) {
  auto num1 = 0;
  auto num2 = 0;
  auto sum = 0;

  if (string2Number(str1, &num1) && string2Number(str2, &num2)) {
    sum = (num1 + num2);
    std::cout << "The sum is " << sum << '\n';
  } else {
    throw "Invalid number entry";
  }

  return sum;
}

bool AddStringProblem::test() {
  // T1
  try {
    addStrings("10", "5");
    addStrings("100", "50");
    addStrings("5000", "99");
    addStrings("-5000", "99");
  } catch (const char* msg) {
    std::cerr << msg << '\n';
    return false;
  }
  return true;
}
