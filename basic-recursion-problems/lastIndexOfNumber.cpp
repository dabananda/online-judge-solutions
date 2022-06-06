#include <iostream>

using namespace std;

int lastIndexOfNumber(int arr[], int size, int n) {
  if (size == 0) return 0;
  else {
    if (arr[size - 1] == n) return size - 1;
    else lastIndexOfNumber(arr, size - 1, n);
  }
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) cin >> arr[i];
  int n;
  cin >> n;
  cout << lastIndexOfNumber(arr, size, n) << endl;

  return 0;
}