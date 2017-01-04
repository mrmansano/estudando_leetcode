/**
Given a string which consists of lowercase or uppercase letters, find the length
of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/
#include <iostream>
#include <map>
#include <string>
#include "leetcode.hpp"

int LongestPalindromeProblem::longestPalindrome(std::string &&s) {
  auto count = 0;
  auto singles = 0;
  std::map<char, int> char_count;

  for (auto &c : s) {
    char_count[c]++;
  }

  for (auto &p : char_count) {
    if (p.second == 1) {
      singles++;
    }
    count += p.second - (p.second % 2);
  }

  if (count > 0 && singles > 0) count += 1;

  return count;
}

bool LongestPalindromeProblem::test() {
  std::cout << "Test1 = " << longestPalindrome("abccccdd") << '\n';
  std::cout << "Test2 = " << longestPalindrome("abcccdd") << '\n';
  return true;
}
