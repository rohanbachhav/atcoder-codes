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
   vector<int> l(m), r(m);
   for (int i = 0; i < m; i++) {
      cin >> l[i] >> r[i];
   }
   sort(l.begin(), l.end());
   sort(r.begin(), r.end());

   int ans = m;
   for (int i = 1; i <= n; i++) {
      int c = m;
      auto p = lower_bound(r.begin(), r.end(), i) - r.begin();
      if (p == m) {
         c -= m;
         ans = min(ans, c);
         continue;
      } else if (r[p] >= i) {
         p--;
      }
      if (p >= 0) {
         p++;
         c -= p;
      }

      p = lower_bound(l.begin(), l.end(), i + 1) - l.begin();
      c -= m - p;

      ans = min(ans, c);
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