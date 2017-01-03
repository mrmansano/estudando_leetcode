/**
Given a non-empty array of integers, return the third maximum number in this
array. If it does not exist, return the maximum number. The time complexity must
be in O(n).

Example 1:
Input: [3, 2, 1]

Output: 1

Explanation: The third maximum is 1.
Example 2:
Input: [1, 2]

Output: 2

Explanation: The third maximum does not exist, so the maximum (2) is returned
instead.
Example 3:
Input: [2, 2, 3, 1]

Output: 1

Explanation: Note that the third maximum here means the third maximum distinct
number.
Both numbers with value 2 are both considered as second maximum.
*/
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T> void printVector(std::vector<T> &&in_arr) {
  for (auto &i : in_arr) {
    std::cout << i << " ";
  }
  std::cout << '\n';
}

template <typename T> T thirdMaxNumber(std::vector<T> &&in_arr) {
  auto flt_vec = in_arr;
  std::sort(flt_vec.begin(), flt_vec.end());
  flt_vec.erase(std::unique(flt_vec.begin(), flt_vec.end()), flt_vec.end());
  printVector(std::move(flt_vec));
  return (flt_vec.size() < 3 ? *(flt_vec.end() - 1) : *(flt_vec.end() - 3));
}

int main(int argc, char const *argv[]) {
  auto t0 = {1, 2, 3};
  auto t1 = {3, 2, 1};
  auto t2 = {1, 8};
  auto t3 = {2, 3, 0, 0, 4, 9, 4, 9, 7, 0, 5, 1, 1};

  std::cout << "t0 = " << thirdMaxNumber<int>(t0) << '\n';
  std::cout << "t1 = " << thirdMaxNumber<int>(t1) << '\n';
  std::cout << "t2 = " << thirdMaxNumber<int>(t2) << '\n';
  std::cout << "t3 = " << thirdMaxNumber<int>(t3) << '\n';

  return 0;
}
