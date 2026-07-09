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

   ll n, q;
   cin >> n >> q;
   vector<ll> v(n);
   iota(v.begin(), v.end(), 1ll);

   int start = 0;
   while (q--) {
      int t;
      cin >> t;
      ll p, x, k;

      if (t == 1) {
         cin >> p >> x;
         v[(start + p - 1) % n] = x;
      } else if (t == 2) {
         cin >> p;
         cout << v[(start + p - 1) % n] << nl;
      } else {
         cin >> k;
         start = (start + k) % n;
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