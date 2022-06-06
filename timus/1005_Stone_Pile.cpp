#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  int n, x, y = 1, min;
  cin >> n;
  vector<int> piles;
  for (int i = 0; i < n; i++) {
    cin >> x;
    piles.push_back(x);
  }
  min = abs(piles[0] - piles[1]);
  while (n--) {
    if (n == 0) {
      break;
    } else {
      int z = abs(piles[y] - piles[y + 1]);
      if (z < min) {
        min = z;
      }
      y++;
    }
  }
  cout << min << endl;

  return 0;
}