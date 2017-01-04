#include <memory>
#include "leetcode.hpp"

template <class T>
void run() {
  T problem;
  problem.runTest();
}

void otherRun(std::unique_ptr<LeetCodeProblem> in_p) { in_p->runTest(); }

int main(int argc, char const *argv[]) {
  // run<AddStringProblem>();
  // run<ArithmeticSlicesProblem>();
  // run<FizzBuzzProblem>();
  // run<HexStringProblem>();
  // run<LongestPalindromeProblem>();
  // run<ThirdMaxNumberProblem>();
  // run<NthDigitProblem>();
  // run<RotateFunctionProblem>();
  // run<FindTheDifferenceProblem>();
  // run<FindUniqueProblem>();
  // run<RansonNoteProblem>();
  run<ReverseVowelsProblem>();
  // std::unique_ptr<AddStringProblem> add_string_problem(new
  // AddStringProblem());
  // std::unique_ptr<ArithmeticSlicesProblem> arithmetic_slices_problem(
  //     new ArithmeticSlicesProblem());
  // std::unique_ptr<FizzBuzzProblem> fizz_buzz_problem(new FizzBuzzProblem());
  // std::unique_ptr<HexStringProblem> hex_string_problem(new
  // HexStringProblem());
  // std::unique_ptr<LongestPalindromeProblem> longest_palindrome_problem(
  //     new LongestPalindromeProblem());
  // std::unique_ptr<ThirdMaxNumberProblem> third_max_number_problem(
  //     new ThirdMaxNumberProblem());
  //
  // otherRun(std::move(add_string_problem));
  // otherRun(std::move(arithmetic_slices_problem));
  // otherRun(std::move(fizz_buzz_problem));
  // otherRun(std::move(hex_string_problem));
  // otherRun(std::move(longest_palindrome_problem));
  // otherRun(std::move(third_max_number_problem));

  return 0;
}
