#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  long long int count = 1, max = 0;
  char c = s[0];
  sort(s.begin() , s.end());
  for (long long int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1]) {
      count++;
    } else {
      if (count > max) {
        max = count;
        count = 1;
        c = s[i];
      }
    }
  }
  cout << c << endl;

  return 0;
}