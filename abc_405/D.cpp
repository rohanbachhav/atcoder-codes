#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

#ifndef ONLINE_JUDGE
#include <Debug.h>
#else
#define debug(...) 4
#endif

int const MOD = 1e9 + 7;
int n, m;
vector<str> s;
vector<str> ans;
vector<vector<bool>> vis;

vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, 1, 0, -1};
vector<char> arrow = {'v', '<', '^', '>'};

bool is_valid(int x, int y) {
   return x >= 0 && x < n && y >= 0 && y < m && s[x][y] != '#' && s[x][y] != 'E';
}

void bfs(deque<pair<int, int>> &t) {
   while (!t.empty()) {
      for (int j = 0; j < 4; j++) {
         int x = t[0].first + dx[j];
         int y = t[0].second + dy[j];
         if (is_valid(x, y)) {
            if (!vis[x][y]) {
               vis[x][y] = 1;
               ans[x][y] = arrow[j];
               t.pb({x, y});
            }
         }
      }
      t.pop_front();
   }
}

void solve() {

   cin >> n >> m;
   s.resize(n);
   vis.resize(n);
   for (int i = 0; i < n; i++) {
      vis[i].resize(m);
   }
   deque<pair<int, int>> t;
   for (int i = 0; i < n; i++) {
      cin >> s[i];
      for (int j = 0; j < m; j++) {
         if (s[i][j] == 'E') {
            t.pb({i, j});
         }
      }
   }
   ans = s;

   bfs(t);

   for (int i = 0; i < n; i++) {
      cout << ans[i] << nl;
   }

}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int TESTCASES = 1;
   // cin >> TESTCASES;

   while (TESTCASES--) {
      solve();
   }
   return 0;
}