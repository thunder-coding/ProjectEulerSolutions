#include <cstdint>
#include <cstdlib>
#include <iostream>

int main() {
  uint64_t n = 100;
  // Just a very simple simplification
  // (\Sigma{n})^2 - \Sigma({n^2}) \\
  // = ({ n(n + 1) \over 2})^2 - ({n(n + 1)(2n + 1) \over 6}) \\
  // = {n (n + 1)(n - 1)(3n + 2) \over 12}
  std::cout << n * (n + 1) * (n - 1) * (3 * n + 2) / 12;
  return EXIT_SUCCESS;
}
