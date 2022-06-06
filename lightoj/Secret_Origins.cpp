#include <bits/stdc++.h>

using namespace std;

int binary(int decimal) {
  int binaryNumber = 1;
  while (decimal != 0) {
    binaryNumber = (binaryNumber * 10) + (decimal % 2);
    decimal = decimal / 2;
  }
}

void factory() {
  int n;
  cin >> n;
  int binaryOfN = binary(n);
}

int main() {
  int t;
  cin >> t;
  for (int test = 0; test < t; test++) {
    factory();
  }

  return 0;
}