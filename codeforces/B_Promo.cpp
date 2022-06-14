#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < q; i++) {
    int x, y, sum = 0;
    cin >> x >> y;
    for (int j = n - x; j <= n - y; j++) {
      sum = sum + arr[j];
    }
    cout << sum << endl;
  }

  return 0;
}