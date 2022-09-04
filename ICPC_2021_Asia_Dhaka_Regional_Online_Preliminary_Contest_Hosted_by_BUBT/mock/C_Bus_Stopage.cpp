#include <iostream>
#include <algorithm>

typedef long long int lli;

using namespace std;

int main() {
  lli testCase, id = 1;
  cin >> testCase;
  while (testCase--) {
    lli stoppages, a, b;
    cin >> stoppages;
    lli arr[stoppages - 1];
    arr[0] = 0;
    for (lli i = 0; i < stoppages - 1; i++) {
      cin >> a >> b;
      arr[i + 1] = (a - b) + arr[i];
    }
    lli max = arr[0];
    for (lli i = 0; i < stoppages; i++) {
      if (arr[i] > max) {
        max = arr[i];
      }
    }
    cout << "Case " << id << ": "<<  max << endl;
    id++;
  }

  return 0;
}