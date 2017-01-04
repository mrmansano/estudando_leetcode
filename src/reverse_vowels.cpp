#include <unordered_map>
#include "leetcode.hpp"

std::string ReverseVowelsProblem::reverseVowels(const std::string& s) {
  auto vowels = {'a', 'e', 'i', 'o', 'u'};
  auto ret_s = s;
  std::vector<int> char_map;

  for (auto it = 0; it < ret_s.size(); ++it) {
    if (std::find(vowels.begin(), vowels.end(), s[it]) != std::end(vowels)) {
      char_map.push_back(it);
    }
  }

  std::cout << "Vowels count == " << char_map.size() << '\n';

  for (auto f_it = char_map.begin(), b_it = char_map.end() - 1; f_it != b_it;) {
    auto tmp_f = ret_s[*f_it];
    ret_s[*f_it] = ret_s[*b_it];
    ret_s[*b_it] = tmp_f;
    if (++f_it != b_it) --b_it;
  }

  return ret_s;
}

bool ReverseVowelsProblem::test() {
  auto s1 = "hello";
  auto s2 = "leetcode";

  std::cout << "reverse = " << reverseVowels(s1) << '\n';
  std::cout << "reverse = " << reverseVowels(s2) << '\n';

  return true;
}
