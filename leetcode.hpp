#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

class LeetCodeProblem {
 protected:
  template <typename T>
  void printVector(const std::vector<T>& v) {
    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<T>(std::cout, ", "));
  }

 public:
  LeetCodeProblem(const std::string& title = "") : title_(title) {}

  void runTest() {
    std::cout << "Running test for " << title_ << ":\n";
    if (test()) {
      std::cout << "SUCESS" << '\n';
    } else {
      std::cout << "FAILED" << '\n';
    }
  }

 private:
  virtual bool test() = 0;

  std::string title_;
};

class AddStringProblem : public LeetCodeProblem {
 public:
  AddStringProblem() : LeetCodeProblem("Add String Problem") {}
  int addStrings(const std::string& str1, const std::string& str2);
  bool test();
};

class ArithmeticSlicesProblem : public LeetCodeProblem {
 public:
  ArithmeticSlicesProblem() : LeetCodeProblem("Arithmetic Slices Problem") {}
  int numberOfArithmeticSlices(const std::vector<int>& A);
  bool test();
};

class FizzBuzzProblem : public LeetCodeProblem {
 public:
  FizzBuzzProblem() : LeetCodeProblem("Fizz Buzz Problem") {}
  std::vector<std::string> fizzBuzz(int n);
  bool test();
};

class HexStringProblem : public LeetCodeProblem {
 public:
  HexStringProblem() : LeetCodeProblem("Hex String Problem") {}
  std::string toHex(int num);
  bool test();
};

class LongestPalindromeProblem : public LeetCodeProblem {
 public:
  LongestPalindromeProblem() : LeetCodeProblem("Longest Palindrome Problem") {}
  int longestPalindrome(std::string&& s);
  bool test();
};

class ThirdMaxNumberProblem : public LeetCodeProblem {
 public:
  ThirdMaxNumberProblem() : LeetCodeProblem("Third Max Number Problem") {}
  template <typename T>
  T thirdMaxNumber(std::vector<T>&& in_arr) {
    auto flt_vec = in_arr;
    std::sort(flt_vec.begin(), flt_vec.end());
    flt_vec.erase(std::unique(flt_vec.begin(), flt_vec.end()), flt_vec.end());
    printVector(std::move(flt_vec));
    return (flt_vec.size() < 3 ? *(flt_vec.end() - 1) : *(flt_vec.end() - 3));
  }
  bool test();
};

class NthDigitProblem : public LeetCodeProblem {
 public:
  NthDigitProblem() : LeetCodeProblem("Nth Digit Problem") {}
  int findNthDigit(int n);
  bool test();
};

class RotateFunctionProblem : public LeetCodeProblem {
 public:
  RotateFunctionProblem() : LeetCodeProblem("Rotate Function Problem") {}
  int maxRotateFunction(std::vector<int>& A);
  bool test();
};

class FindTheDifferenceProblem : public LeetCodeProblem {
 public:
  FindTheDifferenceProblem() : LeetCodeProblem("Find The Difference Problem") {}
  char findTheDifference(const std::string& s, const std::string& t);
  bool test();
};

class FindUniqueProblem : public LeetCodeProblem {
 public:
  FindUniqueProblem() : LeetCodeProblem("Find Unique Problem") {}
  int firstUniqChar(const std::string& s);
  bool test();
};

class RansonNoteProblem : public LeetCodeProblem {
 public:
  RansonNoteProblem() : LeetCodeProblem("Ranson Note Problem") {}
  bool canConstruct(const std::string& ransomNote, const std::string& magazine);
  bool test();
};

class ReverseVowelsProblem : public LeetCodeProblem {
 public:
  ReverseVowelsProblem() : LeetCodeProblem("Reverse Vowels Problem") {}
  std::string reverseVowels(const std::string& s);
  bool test();
};
