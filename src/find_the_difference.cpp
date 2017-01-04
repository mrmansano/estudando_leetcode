#include "leetcode.hpp"

char FindTheDifferenceProblem::findTheDifference(const std::string& s,
                                                 const std::string& t) {
  auto diff = '\0';
  auto s_cp = s;
  auto t_cp = t;
  std::vector<char> diff_str;

  std::sort(s_cp.begin(), s_cp.end());
  std::sort(t_cp.begin(), t_cp.end());

  std::cout << "S = " << s_cp << '\n';
  std::cout << "T = " << t_cp << '\n';

  std::set_difference(t_cp.begin(), t_cp.end(), s_cp.begin(), s_cp.end(),
                      std::back_inserter(diff_str));

  diff = diff_str[0];

  return diff;
}

bool FindTheDifferenceProblem::test() {
  auto s = "abcd";
  auto t = "cbfad";
  std::cout << "Diff char is " << findTheDifference(s, t) << '\n';
  return true;
}
