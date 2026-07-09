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

   int h, w, n;
   cin >> h >> w >> n;
   vector<vector<int>> row(h), col(w);
   vector<int> x(n), y(n);
   vector<int> r(h), c(w);
   for (int i = 0; i < n; i++) {
      cin >> x[i] >> y[i];
      --x[i], --y[i];
      row[x[i]].pb(y[i]);
      col[y[i]].pb(x[i]);
      r[x[i]]++;
      c[y[i]]++;
   }

   int q;
   cin >> q;
   while (q--) {
      int t, num;
      cin >> t >> num;
      num--;
      if (t == 1) {
         if (r[num]) {
            for (int i = 0; i < row[num].size(); i++) {
               if (c[row[num][i]] > 0) {
                  c[row[num][i]]--;
               }
            }
         }
         cout << r[num] << nl;
         r[num] = 0;
      } else {
         if (c[num]) {
            for (int i = 0; i < col[num].size(); i++) {
               if (r[col[num][i]] > 0) {
                  r[col[num][i]]--;
               }
            }
         }
         cout << c[num] << nl;
         c[num] = 0;
      }
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