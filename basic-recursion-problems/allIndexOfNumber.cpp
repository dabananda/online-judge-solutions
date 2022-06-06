#include <iostream>

using namespace std;

void allIndexOfNumber(int arr[], int size, int n, int index = 0) {
  if (index <= size - 1) {
    if (arr[index] == n) cout << index << endl;
    allIndexOfNumber(arr, size, n, index + 1);
  }
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) cin >> arr[i];
  int n;
  cin >> n;
  allIndexOfNumber(arr, size, n);

  return 0;
}