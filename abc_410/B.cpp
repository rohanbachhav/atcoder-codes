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

   int n, q;
   cin >> n >> q;
   vector<int> v(q);
   for (int i = 0; i < q; i++) {
      cin >> v[i];
      v[i]--;
   }

   vector<int> mp(n);
   vector<int> ans(q);
   for (int i = 0; i < q; i++) {
      if (v[i] == -1) {
         int mn = 1e9;
         for (int j = 0; j < n; j++) {
            mn = min(mn, mp[j]);
         }
         for (int j = 0; j < n; j++) {
            if (mp[j] == mn) {
               mp[j]++;
               ans[i] = j + 1;
               break;
            }
         }
      } else {
         mp[v[i]]++;
         ans[i] = v[i] + 1;
      }
   }

   for (int i = 0; i < q; i++) {
      cout << ans[i] << " \n"[i == q - 1];
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