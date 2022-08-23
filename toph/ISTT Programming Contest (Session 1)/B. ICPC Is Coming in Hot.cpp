#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int sf[10] = {};
  for (int i = 0; i < s.length(); i++) {
    sf[s[i] - '0']++;
  }
  int indexOfMax = sf[0];
  for (int i = 0; i < 10; i++) {
    if (sf[i] > sf[indexOfMax]) {
      indexOfMax = i;
    }
  }
  cout << indexOfMax << endl;

  return 0;
}