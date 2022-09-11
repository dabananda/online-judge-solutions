#include <bits/stdc++.h>

using namespace std;

int main() {
  int testCase, id = 1;
  cin >> testCase;
  while (testCase--) {
    double AB, AC, BC, ratio;
    cin >> AB >> AC >> BC >> ratio;
    cout << "Case " << id << ": " << setprecision(10) << AB * sqrt(ratio / (ratio + 1)) << endl;
    id++;
  }

  return 0;
}