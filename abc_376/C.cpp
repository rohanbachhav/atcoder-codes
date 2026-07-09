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
   std::vector<ll> v(n), b(n - 1);
   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }
   for (int i = 0; i < n - 1; i++) {
      cin >> b[i];
   }
   sort(v.begin(), v.end());
   sort(b.begin(), b.end());
   int compare = n - 2;
   int flag = 1;
   int ans = -1;
   for (int i = n - 1; i >= 0; i--) {
      if (i == 0 && flag) {
         ans = v[i];
         break;
      }
      if (v[i] <= b[compare]) {
         compare--;
      } else if (flag) {
         ans = v[i];
         flag = 0;
      } else {
         cout << -1 << nl;
         return;
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