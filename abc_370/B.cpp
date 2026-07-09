#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   int n;
   cin >> n;

   int x;

   vector<vector<int>> a(n);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
         cin >> x;
         a[i].pb(x);
      }
   }

   int ans = 1;

   for (int i = 1; i <= n; i++) {
      if (ans >= i) ans = a[ans - 1][i - 1];
      else ans = a[i - 1][ans - 1];
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