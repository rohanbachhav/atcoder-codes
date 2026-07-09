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
   vector<int> a(q);
   for (int i = 0; i < q; i++) {
      cin >> a[i];
   }
   vector<int> black(n + 2);
   int ans = 0;
   for (int i = 0; i < q; i++) {
      if (black[a[i]] == 1) {
         black[a[i]] = 0;

         if (black[a[i] - 1] == 0 && black[a[i] + 1] == 0) {
            ans--;
         } else if (black[a[i] - 1] == 1 && black[a[i] + 1] == 1) {
            ans++;
         }
      } else {
         black[a[i]] = 1;
         
         if (black[a[i] - 1] == 0 && black[a[i] + 1] == 0) {
            ans++;
         } else if (black[a[i] - 1] == 1 && black[a[i] + 1] == 1) {
            ans--;
         }
      }

      cout << ans << nl;
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