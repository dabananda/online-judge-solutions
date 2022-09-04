#include <iostream>

typedef long long int lli;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
  TLE;
  lli testCase, id = 1;
  cin >> testCase;
  while (testCase--) {
    lli a, b, c, k;
    cin >> a >> b >> c >> k;
    lli sum = a + b + c;
    if (sum % 3 == 0) {
      lli avarage = sum / 3;
      if ((a - avarage) % k != 0 || (b - avarage) % k != 0 || (c - avarage) % k != 0) {
        cout << "Case " << id << ": Fight" << endl;
      } else {
        cout << "Case " << id << ": Peaceful" << endl;
      } 
    } else {
      cout << "Case " << id << ": Fight" << endl;
    }
    id++;
  }

  return 0;
}