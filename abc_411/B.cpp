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
   vector<int> d(n - 1), pref(n);
   for (int i = 0; i < n - 1; i++) {
      cin >> d[i];
      pref[i + 1] = pref[i] + d[i];
   }
   for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
         cout << pref[j] - pref[i] << " ";
      }
      cout << nl;
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