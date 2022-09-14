#include <iostream>
#include <vector>

using namespace std;

int main() {
  int testCase;
  cin >> testCase;
  while (testCase--) {
    int n, a, b, c;
    cin >> n;
    vector<int> arr;
    if (n % 3 == 1) {
      a = b = n / 3, c = n / 3 + 1;
      cout << c << endl;
    } else if (n % 3 == 2) {
      a = b = n / 3, c = n / 3 + 2;
      cout << c + 1 << endl;
    } else {
      a = b = c = n / 3;
      cout << a << endl;
    }
  }

  return 0;
}