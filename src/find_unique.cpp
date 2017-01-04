#include "leetcode.hpp"

int FindUniqueProblem::firstUniqChar(const std::string& s) {
  for (auto idx = 0; idx < s.size(); ++idx) {
    auto k = 0;
    if (std::find_if(s.cbegin(), s.cend(), [&k, &s, &idx](const char& c) {
          return (idx != k++ && s[idx] == c);
        }) == s.cend()) {
      return idx;
    }
  }

  return -1;
}

bool FindUniqueProblem::test() {
  auto s1 = "leetcode";
  auto s2 = "loveleetcode";
  auto s3 = "marcelodosreismansano";

  std::cout << "Unique s1 == " << firstUniqChar(s1) << '\n';
  std::cout << "Unique s2 == " << firstUniqChar(s2) << '\n';
  std::cout << "Unique s3 == " << firstUniqChar(s3) << '\n';

  return true;
}
