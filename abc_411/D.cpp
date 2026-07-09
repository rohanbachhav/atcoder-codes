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
   unordered_map<int, str> p;
   str s = "";

   vector<bool> matters(n + 1);
   vector<int> t(q), x(q);
   unordered_map<int, str> y;
   for (int i = 0; i < q; i++) {
      cin >> t[i] >> x[i];
      if (t[i] == 3) {
         matters[x[i]] = true;
      } else if (t[i] == 2) {
         cin >> y[i];
      }
   }
   for (int i = 0; i < q; i++) {
      if (t[i] == 1) {
         p[x[i]] = s;
      } else if (t[i] == 2 && matters[x[i]]) {
         p[x[i]] += y[i];
      } else {
         s = p[x[i]];
      }
   }

   cout << s << nl;

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