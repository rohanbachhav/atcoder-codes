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

   int n, s;
   cin >> n >> s;

   vector<int> t(n);
   for (int i = 0; i < n; i++) {
      cin >> t[i];
   }

   int p = 0;
   for (int i = 0; i < n; i++) {
      if (t[i] - p > s) {
         cout << "No\n";
         return;
      }
      p = t[i];
   }

   cout << "Yes\n";

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