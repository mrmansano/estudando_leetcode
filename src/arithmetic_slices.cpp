/**
A sequence of number is called arithmetic if it consists of at least three
elements and if the difference between any two consecutive elements is the same.

For example, these are arithmetic sequence:

1, 3, 5, 7, 9
7, 7, 7, 7
3, -1, -5, -9
The following sequence is not arithmetic.

1, 1, 2, 5, 7

A zero-indexed array A consisting of N numbers is given. A slice of that array
is any pair of integers (P, Q) such that 0 <= P < Q < N.

A slice (P, Q) of array A is called arithmetic if the sequence:
A[P], A[p + 1], ..., A[Q - 1], A[Q] is arithmetic. In particular, this means
that P + 1 < Q.

The function should return the number of arithmetic slices in the array A.


Example:

A = [1, 2, 3, 4]

return: 3, for 3 arithmetic slices in A: [1, 2, 3], [2, 3, 4] and [1, 2, 3, 4]
itself.
*/
#include <iostream>
#include <vector>

int numberOfArithmeticSlices(const std::vector<int> &A) {
  auto diff = 0;
  auto cand_total = 0;
  auto len = 0;

  for (int i = 1; i < A.size(); ++i) {
    auto curr_diff = A[i] - A[i - 1];
    if (curr_diff != diff) {
      if (cand_total >= 3) {
        len += cand_total * (cand_total + 1) / 2;
        cand_total = 0;
      }
      diff = curr_diff;
    } else {
      cand_total++;
    }
  }

  return (cand_total == 0 ? len : len += cand_total * (cand_total + 1) / 2);
}

int main(int argc, char const *argv[]) {
  auto t0 = {1, 2, 3, 4, 5};
  std::cout << numberOfArithmeticSlices(t0) << '\n';
  return 0;
}
