#include <iostream>

int main() {
  int n;
  std::cin >> n;

  for (int i = 0; i < 2 * n + 1; i++) {
    std::cout << (i % 2 == 0 ? 1 : 0);
  }
  std::cout << "\n";

  return 0;
}