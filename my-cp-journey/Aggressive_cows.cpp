// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<long long>
#define all(v) v.begin(), v.end()
#define tle ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

bool check(ll cows, vi v, ll n, ll dis) {
  ll cnt = 1;
  ll last_position = v[0];
  for (int i = 1; i < n; i++) {
    if (v[i] - last_position >= dis) {
      last_position = v[i];
      cnt++;
    }
    if (cnt == cows) {
      return true;
    }
  }
  return false;
}

void solution() {
  ll n, c;
  cin >> n >> c;
  vi v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(all(v));
  ll low = 0;
  ll high = v[n - 1] - v[low];
  ll ans = -1;
  while (low <= high) {
    ll mid = low + (high - low) / 2;
    if (check(c, v, n, mid)) {
      ans = mid;
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  cout << ans << "\n";
}

int main() {
  tle;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}