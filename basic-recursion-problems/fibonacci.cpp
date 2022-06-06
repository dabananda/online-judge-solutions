#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  // fib 5 = 5 [0 1 1 2 3 5 (index starts from 0)]
  cout << fibonacci(5) << endl;

  return 0;
}