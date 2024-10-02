/**
 * Title: Guilty Prince
 * Link: https://lightoj.com/problem/guilty-prince
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-26 10:22:04
 *
 */

#include <bits/stdc++.h>

using namespace std;

void dfs(int m, int n, int si, int sj, int& count, vector<vector<char>>& mat, vector<vector<bool>>& vis) {
  vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
  count++;
  vis[si][sj] = true;
  for (int i = 0; i < 4; i++) {
    int x = si + dir[i].first, y = sj + dir[i].second;
    if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && mat[x][y] != '#') {
      dfs(m, n, x, y, count, mat, vis);
    }
  }
}

int main() {
  int t, caseNo = 1;
  cin >> t;
  while (t--) {
    int m, n;
    cin >> m >> n;
    vector<vector<char>> mat(n, vector<char>(m));
    int si, sj, count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> mat[i][j];
        if (mat[i][j] == '@') {
          si = i, sj = j;
        }
      }
    }
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    dfs(m, n, si, sj, count, mat, vis);
    cout << "Case " << caseNo++ << ": " << count << endl;
  }

  return 0;
}