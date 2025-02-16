#include <array>
#include <cstdint>
#include <iostream>
int main() {
  // We need to find the 10,001th prime number, which also conveniently happens to be the 10,000th odd prime
  std::array<int64_t, 10000> primes = {};
  // Number of primes we have already found
  int count = 0;
  for (int64_t num = 3; count != 10000; num += 2) {
    bool isPrime = true;
    for (int i = 0; i < count; i++) {
      if (num % primes[i] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      count++;
      primes[count - 1] = num;
    }
  }
  // The 10,000th odd prime is the 10,001th prime
  std::cout << primes[9999];
}
