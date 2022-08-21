#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    int count = 0;
    for (long long int i = 0; i < s.length(); i++) {
      if (((int)s[i] >= 48 && (int)s[i] <= 54) || s[i] == 'O' ) {
        count++;
      }
    }
    int overs = count / 6;
    int balls = count % 6;
    if (overs > 0) {
      string over = "", ball = "";
      if (overs == 1) {
        over = "OVER";
      } else {
        over = "OVERS";
      }
      if (balls == 1) {
        ball = "BALL";
      } else {
        ball = "BALLS";
      }

      if (balls == 0) cout << overs << " " << over << endl;
      else if (balls == 1) {
        cout << overs << " " << over << " " << balls << " " << ball << endl;
      } else {
        cout << overs << " " << over << " " << balls << " " << ball << endl;
      }
      
    } else {
      if (balls == 1) cout << balls << " BALL" << endl;
      else cout << balls << " BALLS" << endl;
    }
  }

  return 0;
}