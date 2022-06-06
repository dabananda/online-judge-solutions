#include <iostream>

using namespace std;

int sum(int arr[], int n) {
  if (n == 0) return 0;
  return arr[n - 1] + sum(arr, n - 1);
}

int main() {
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n;  i++) cin >> arr[i];
  cout << sum(arr, n) << endl;

  return 0;
}