#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
int main() {
  // Since we are just finding odd primes, and only one even prime exist
  uint64_t sum = 2;
  std::vector<uint64_t> primes;
  // According to prime number theorem,
  // pi(N) ~ N / log N
  primes.reserve(2000000 / std::log(2000000));
  for (int64_t num = 3; num <= 2000000; num += 2) {
    bool isPrime = true;
    for (int i = 0; i < primes.size(); i++) {
      if (num % primes[i] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      primes.emplace_back(num);
      sum += num;
    }
  }
  std::cout << sum;
}
