#include <stdio.h>

int sumDivisibleBy(int n) {
  int count = 999 / n;
  return count * (count + 1) * n / 2;
}

int main() {
  int sumOfMultiples = sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15);
  printf("%d", sumOfMultiples);
}
