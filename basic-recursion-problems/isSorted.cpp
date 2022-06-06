#include <iostream>

using namespace std;

bool isSorted(int arr[], int size) {
  if (size == 0 || size == 1) return true;
  if (arr[0] > arr[1]) return false;
  return isSorted(arr + 1, size - 1);
}

int main() {
  int arr[5] = {1, 2, 3, 5, 4};

  // 0 = false, 1 = true [Output will be 0]
  cout << isSorted(arr, 5) << endl;

  return 0;
}