/**
Given an integer, write an algorithm to convert it to hexadecimal. For negative
integer, two’s complement method is used.

Note:

All letters in hexadecimal (a-f) must be in lowercase.
The hexadecimal string must not contain extra leading 0s. If the number is zero,
it is represented by a single zero character '0'; otherwise, the first character
in the hexadecimal string will not be the zero character.
The given number is guaranteed to fit within the range of a 32-bit signed
integer.
You must not use any method provided by the library which converts/formats the
number to hex directly.
Example 1:

Input:
26

Output:
"1a"
Example 2:

Input:
-1

Output:
"ffffffff"
*/

#include <algorithm>
#include <climits>
#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>

constexpr char hex_table[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                              '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

std::string toHex(int num) {
  std::stringstream ss;
  int32_t hex_div = static_cast<int32_t>(num);
  auto hex_res = 0;

  if (hex_div < 0) {
    hex_div = std::numeric_limits<int32_t>::max() + (hex_div + 1);
  }

  while (hex_div >= 16) {
    hex_res = hex_div % 16;
    hex_div /= 16;

    ss << hex_table[hex_res];
  }

  ss << hex_table[hex_div];

  auto out_str = ss.str();

  std::reverse(out_str.begin(), out_str.end());

  return out_str;
}

int main(int argc, char const *argv[]) {
  std::cout << "The number 16 in hex is " << toHex(16) << '\n';
  std::cout << "The number 11 in hex is " << toHex(11) << '\n';
  std::cout << "The number 5200 in hex is " << toHex(5200) << '\n';
  std::cout << "The number -2 in hex is " << toHex(-2) << '\n';
  return 0;
}
