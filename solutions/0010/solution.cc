#include <array>
#include <cmath>
#include <cstdint>
#include <iostream>

int main() {
  // Since we are just finding odd primes, and only one even prime exist
  uint64_t sum = 2;
  std::array<bool, 2000000> isNotPrime;
  for (int i = 0; i < 2000000; i++) isNotPrime[i] = false;
  isNotPrime[0] = true;
  for (int i = 1; i < 2000000; i += 2) isNotPrime[i] = true;
  for (int64_t num = 3; num <= std::sqrt(2000000); num += 2) {
    if (!isNotPrime[num - 1]) {
      for (int i = 2 * num; i < 2000000; i += num) {
        isNotPrime[i - 1] = true;
      }
    }
  }
  for (int i = 3; i < 2000000; i += 2) {
    if (!isNotPrime[i - 1]) {
      sum += i;
    }
  }
  std::cout << sum;
}
