#include <stdbool.h>
#include <stdio.h>

bool isPalindrome(int num) {
  if (num < 0) return false;
  if (num == 0) return true;
  int l = 1, r = 1;
  for (int y = num; y >= 10;) {
    l *= 10;
    y /= 10;
  }
  while (l > r) {
    if ((num / l) % 10 != (num / r) % 10) return false;
    l /= 10;
    r *= 10;
  }
  return true;
}

int main() {
  int largestPalindrome = 0;
  // I know this isn't optimal, but it works.
  //
  // Alternate approach that I can think of is to start with x = 999, and then only look for numbers in the range 900000-999999. The maximum value of
  // y in this case to take can be determined using logarithm: 6 < log x + log y < 7. This will ensure that the number is 6 digit at the same time
  // also reduce the amount of computations. If the palindrome isn't in the range which we assumed it to be in, then we can just keep on reducing the
  // range, while adjusting the value of logarithm appropriately. This should work well for larger number of digits, ideally. Here there is no need
  // for this much brainstorming, so leaving it as is.
  //
  // Rule 1 of programming: if it work's don't touch it.
  for (int x = 100; x <= 999; x++) {
    for (int y = 100; y <= 999; y++) {
      if (isPalindrome(x * y) && x * y > largestPalindrome) largestPalindrome = x * y;
    }
  }
  printf("%d", largestPalindrome);
}
