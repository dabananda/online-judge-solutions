#include <iostream>

using namespace std;

int firstIndexOfNumber(int arr[], int n, int index = 0) {
  if (index > sizeof(arr) - 1) return 0; // return 0 for "number not found"
  else if (arr[index] == n) return index;
  else firstIndexOfNumber(arr, n, index + 1);
}

int main() {
  int size;
  cin >> size;
  int *arr = new int[size];
  for (int i = 0; i < size; i++) cin >> arr[i];
  int n;
  cin >> n;
  cout << firstIndexOfNumber(arr, n) << endl;

  return 0;
}