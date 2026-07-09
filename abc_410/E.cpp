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
int const N = 3005;
int n;
vector<vector<int>> dp(N);
vector<int> a(N), b(N);

void dfs(int h, int m, int p) {
   if (h <= 0 || m <= 0 || p >= n) {
      return;
   }
   int t = p;
   if (h >= a[t])
   dp[h - a[t]][m] = max(t + 1, dp[h - a[t]][m]);
   dfs(h - a[t], m, dp[h - a[t], ]);
}

void solve() {

   int h, m;
   cin >> n >> h >> m;
   for (int i = 1; i <= n; i++) {
      cin >> a[i] >> b[i];
   }

   dfs(h, m, 1);

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