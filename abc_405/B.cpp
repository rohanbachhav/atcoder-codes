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
   vector<int> v(n);
   map<int, int> mp;
   for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
   }

   for (int i = 1; i <= m; i++) {
      if (mp.count(i) == 0) {
         cout << 0;
         return;
      }
   }
   int ans = 0;
   for (int i = n - 1; i >= 0; i--) {
      mp[v[i]]--;
      ans++;
      if (mp[v[i]] == 0) {
         break;
      }
   }

   cout << ans;

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