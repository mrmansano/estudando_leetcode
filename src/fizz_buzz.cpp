/**
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for
the multiples of five output “Buzz”. For numbers which are multiples of both
three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/
#include <algorithm>
#include <iostream>
#include <numeric>
#include <sstream>
#include <vector>
#include "leetcode.hpp"

constexpr auto kFizz = "Fizz";
constexpr auto kBuzz = "Buzz";

std::vector<std::string> FizzBuzzProblem::fizzBuzz(int n) {
  std::vector<std::string> out_vec;
  std::vector<int> nums(n);
  std::iota(nums.begin(), nums.end(), 1);

  std::for_each(nums.cbegin(), nums.cend(), [&out_vec](const int &i) {
    std::stringstream in_str;
    if (i % 3 == 0) {
      in_str << kFizz;
    }
    if (i % 5 == 0) {
      in_str << kBuzz;
    }

    if (in_str.str().empty()) {
      in_str << i;
    }

    out_vec.push_back(in_str.str());
  });

  return out_vec;
}

bool FizzBuzzProblem::test() {
  printVector(fizzBuzz(15));
  return true;
}
