// Find the nth digit of the infinite integer sequence 1, 2, 3, 4, 5, 6, 7, 8,
// 9, 10, 11, ...
//
// Note:
// n is positive and will fit within the range of a 32-bit signed integer (n <
// 231).
//
// Example 1:
//
// Input:
// 3
//
// Output:
// 3
// Example 2:
//
// Input:
// 11
//
// Output:
// 0
//
// Explanation:
// The 11th digit of the sequence 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, ... is a 0,
// which is part of the number 10.

#include <numeric>
#include <sstream>
#include "leetcode.hpp"

int NthDigitProblem::findNthDigit(int n) {
  std::vector<int> nums(n);
  std::ostringstream ss;
  std::iota(nums.begin(), nums.end(), 1);

  std::copy(nums.begin(), nums.end(), std::ostream_iterator<int>(ss));
  auto nums_str = ss.str();

  return nums_str[n] - '0';
}

bool NthDigitProblem::test() {
  std::cout << findNthDigit(99) << '\n';
  return true;
}
