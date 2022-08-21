#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  long long int n, k, index = 0;
  cin >> n >> k;
  string s;
  cin >> s;
  long long int count = 1;
  sort(s.begin() , s.end());
  for (long long int i = 0; i < n - 1; i++) {
    if (s[i] != s[i + 1]) {
      count++;
    } 
    if (count == k) {
      index = i;
      break;
    }
  }
  cout << (n - 1) - index << endl;

  return 0;
}