#include <iostream>

using namespace std;

int factorial(int n) {
  if (n == 0 || n == 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  // 5! = 120 [5 * 4 * 3 * 2 * 1 = 120]
  cout << factorial(5) << endl;

  return 0;
}