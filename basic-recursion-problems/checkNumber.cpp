#include <iostream>

using namespace std;

bool checkNumber(int arr[], int size, int n) {
  if (size < 0) return false;
  else {
    if (arr[size - 1] == n) return true;
    else checkNumber(arr, size - 1, n);
  }
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) cin >> arr[i];
  int n;
  cin >> n;
  // 0 = false, 1 = true
  cout << checkNumber(arr, size, n) << endl;

  return 0;
}