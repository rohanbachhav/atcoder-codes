#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void display(vector<ll> &v) {
   int n = v.size();
   for (int i = 0; i < n; i++) {
      cout << v[i] << " \n"[i == n - 1];
   }
}

void solve() {

   ll n;
   cin >> n;

   std::vector<std::vector<ll>> a(n, std::vector<ll>(3));
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < 3; j++) {
         cin >> a[i][j];
      }
   }

   vector<vector<ll>> dp(3, std::vector<ll>(n));

   for (int i = 0; i < 3; i++) {
      dp[i][0] = a[0][i];
   }

   for (int i = 1; i < n; i++) {
      for (int j = 0; j < 3; j++) {
         ll mx = 0;
         for (int k = 0; k < 3; k++) {
            if (k != j) {
               mx = max(mx, dp[k][i - 1]);
            }
         }
         dp[j][i] = a[i][j];
         dp[j][i] += mx;
      }
   }

   // display(dp[0]);
   // display(dp[1]);
   // display(dp[2]);

   cout << max({dp[0][n - 1], dp[1][n - 1], dp[2][n - 1]});
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