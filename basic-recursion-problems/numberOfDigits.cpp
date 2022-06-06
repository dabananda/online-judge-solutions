#include <iostream>

using namespace std;

int digits(int n) {
  // static keyword made the "count" variable usable in the main() function
  static int count = 0; 
  if (n > 0) {
    count++;
    digits(n / 10);
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  cout << digits(n) << endl;

  return 0;
}