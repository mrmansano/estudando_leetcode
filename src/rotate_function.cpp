#include "leetcode.hpp"

int RotateFunctionProblem::maxRotateFunction(std::vector<int>& A) {
  auto count_max = 0;
  auto n = A.size();
  std::vector<int> B(n);

  for (int i = 0; i < n; ++i) {
    auto k = 0;
    auto acc = 0;
    std::rotate_copy(A.cbegin(), A.cbegin() + i, A.cend(), B.begin());
    acc = std::accumulate(
        B.begin(), B.end(), 0,
        [&k](const int& inc, const int& next) { return inc + (k++ * next); });
    count_max = std::max(count_max, acc);
  }

  return count_max;
}

bool RotateFunctionProblem::test() {
  std::vector<int> A = {4, 3, 2, 6};
  std::cout << "Max Rotate == " << maxRotateFunction(A) << '\n';
  return true;
}
