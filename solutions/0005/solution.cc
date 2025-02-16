#include <cmath>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <map>

int main() {
  std::map<uint32_t, uint8_t> primeMap = {};
  for (int i = 2; i <= 20; i++) {
    int num = i;
    for (auto& [prime, count] : primeMap) {
      int k = 0;
      for (; num % prime == 0; k++) num /= prime;
      if (k > count) count = k;
    }
    if (num != 1) {
      primeMap.emplace(num, 1);
    }
  }
  int x = 1;
  for (const auto& [prime, count] : primeMap) {
    x *= std::pow(prime, count);
  }
  std::cout << x;
  return EXIT_SUCCESS;
}
