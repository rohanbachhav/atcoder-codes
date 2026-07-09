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

   int n;
   cin >> n;

   vector<int> v(n);
   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }

   ll ans = 0;
   ll start = 0;
   ll l = 0, r = 0;
   for (int i = 1; i < n - 1; i++) {
      if (v[i] > v[i - 1]) {
         start++;
         i++;
         while (i < n - 1 && v[i] > v[i - 1]) {
            i++;
            start++;
         }
      }
      if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
         l = 1;
         i++;
         while (i < n - 1 && v[i] < v[i - 1]) {
            i++;
         }
      }
      if (l) {
         if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
            ans += start;
            start = 1;
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