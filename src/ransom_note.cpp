#include "leetcode.hpp"

bool RansonNoteProblem::canConstruct(const std::string& ransomNote,
                                     const std::string& magazine) {
  auto note_cp = ransomNote;
  auto mag_cp = magazine;

  std::sort(note_cp.begin(), note_cp.end());
  auto last = std::unique(note_cp.begin(), note_cp.end());
  note_cp.erase(last, note_cp.end());

  for (auto& c : note_cp) {
    auto note_count = std::count(ransomNote.cbegin(), ransomNote.cend(), c);
    auto mag_count = std::count(magazine.cbegin(), magazine.cend(), c);

    if (note_count > mag_count) return false;
  }

  return true;
}

bool RansonNoteProblem::test() {
  auto note = "axba";
  auto magazine = "cbadxabs";

  std::cout << canConstruct(note, magazine) << "\n";

  return true;
}
