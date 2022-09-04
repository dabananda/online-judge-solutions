#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  
  int arr[4];
  arr[0] = a + (b * c);
  arr[1] = a * (b + c);
  arr[2] = a * b * c;
  arr[3] = (a + b) * c;
  int max = arr[0];
  for (int i = 1; i < 4; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << max << endl;

  return 0;
}