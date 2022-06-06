#include <iostream>

using namespace std;

int power(int base, int n) {
  if (n == 0) return 1;
  return base * power(base, n - 1) ;
}

int main() {
  // 2^3 = 8 [2 * 2 * 2 = 8]
  cout << power(2, 3) << endl;  

  return 0;
}