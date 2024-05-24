#include <bits/stdc++.h>

using namespace std;

string trim(string s) {
  int n = s.size();
  string newString = "";
  for (int i = 0; i < n; i++) {
    if (s[i] != ' ') {
      newString += s[i];
    }
  }
  return newString;
}

int main() {
  string s;
  while (getline(cin, s)) {
    s = trim(s);
    sort(s.begin(), s.end());
    cout << s << endl;
  }

  return 0;
}
