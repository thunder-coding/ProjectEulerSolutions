#include <iostream>
int main() {
  // a < b < c
  // a + b + c = 1000
  // a^2 + b^2 = c^2
  // For a, b, c in N
  //
  //
  // One of the properties of a triangle is that sum of any two sides is longer than the other side
  // a + b > c
  // b + c > a  | This is redundant since c > a
  // a + c > b  |                     and c > b
  // a + b = 1000 - c
  //
  // 1000 - c > c
  // 1000     > 2c
  // 500      > c
  //
  // a + b    < 2c
  // 1000 - c < 2c
  // 1000     < 3c
  // 334      <= c
  //
  unsigned int a, b, c;
  for (c = 334; c < 500; c++) {
    for (a = 1, b = 1000 - a - c; a < b; a++, b--) {
      if (a * a + b * b == c * c) std::cout << a * b * c;
    }
  }
}
