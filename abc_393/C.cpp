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

void solve() {

   int n, m;
   cin >> n >> m;
   std::map<pair<int, int>, int> mp;
   int u, v;
   int ans = 0;
   for (int i = 0; i < m; i++) {
      cin >> u >> v;
      if (u > v) {
         swap(u, v);
      }
      if (u == v) {
         ans++;
      } else {
         if (mp[{u, v}] == 1) {
            ans++;
         } else {
            mp[{u, v}] = 1;
         }
      }
   }
   cout << ans << nl;
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