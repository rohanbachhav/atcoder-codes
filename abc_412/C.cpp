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

   ll n;
   cin >> n;
   vector<ll> v;
   ll l, r;
   cin >> l;
   for (int i = 0; i < n - 2; i++) {
      ll x;
      cin >> x;
      v.pb(x);
   }
   cin >> r;
   if (!v.empty()) {
      sort(v.begin(), v.end());
   }

   ll start = l;
   int ans = 0;
   int p = 0;
   ll potential = start;
   if (!v.empty()) {
      while (start * 2 < r && p < n - 2) {
         if (v[p] > start * 2) {
            break;
         } else {
            potential = v[p];
         }
         while (p + 1 < n - 2 && v[p + 1] <= start * 2) {
            p++;
            potential = v[p];
         }
         debug(potential, start);
         if (potential > start) {
            start = potential;
            ans++;
         } else {
            break;
         }
      }
   }

   if (start * 2 >= r) {
      cout << ans + 2 << nl;
   } else {
      cout << -1 << nl;
   }

}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int TESTCASES = 1;
   cin >> TESTCASES;

   while (TESTCASES--) {
      solve();
   }
   return 0;
}