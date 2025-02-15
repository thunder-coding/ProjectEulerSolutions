#include <stdint.h>
#include <stdio.h>

int main() {
  int64_t num = 600851475143;
  while (num % 2 == 0) {
    num /= 2;
  }
  int divisor = 3;
  while (num != 1) {
    while (num % divisor == 0) {
      num /= divisor;
    }
    divisor += 2;
  }
  printf("%d", divisor - 2);
}
