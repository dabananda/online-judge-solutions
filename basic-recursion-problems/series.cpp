#include <iostream>

using namespace std;

void series(int n) {
  if (n) {
    series(n - 1);
  } else return;
  cout << n << endl;
}

int main() {
  // 5 = 1 2 3 4 5
  series(5);

  return 0;
}