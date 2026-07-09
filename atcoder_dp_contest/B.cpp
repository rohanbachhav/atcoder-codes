#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   int n, k = 2;
   cin >> n >> k;

   std::vector<ll> v(n);

   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }

   std::vector<ll> dp(n, LLONG_MAX);

   dp[0] = 0;

   for (int i = 1; i < n; i++) {
      for (int j = 1; j <= min(k, i); j++) {
         dp[i] = min(dp[i - j] + abs(v[i] - v[i - j]), dp[i]);
      }
   }

   cout << dp[n - 1] << nl;

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