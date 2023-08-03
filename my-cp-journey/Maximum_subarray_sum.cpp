// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = b; i >= a; i--)
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  vi v(n);
  rep(i, 0, n) cin >> v[i];
  int best = 0, sum = 0;
  rep(i, 0, n) {
    sum = max(v[i], v[i] + sum);
    best = max(best, sum);
  }
  cout << best;
}
 
int main() {
  fastio;
  solution();
  cout << "\n";
  return 0;
}