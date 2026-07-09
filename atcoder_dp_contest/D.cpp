#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;
std::vector<std::vector<ll>> dp(101, vector<ll>(1e5 + 1));

void display(vector<ll> &v) {
   int n = v.size();
   for (int i = 0; i < n; i++) {
      cout << v[i] << " \n"[i == n - 1];
   }
}

ll knapsack(ll wt[], ll val[], int n, ll W) {
   if (W <= 0 || n <= 0) {
      return 0;
   }
   if (dp[n - 1][W - 1] != -1) {
      return dp[n - 1][W - 1];
   }
   if (wt[n - 1] <= W) {
      return dp[n - 1][W - 1] = max(val[n - 1] + knapsack(wt, val, n - 1, W - wt[n - 1]), knapsack(wt, val, n - 1, W));
   } else {
      return dp[n - 1][W - 1] = knapsack(wt, val, n - 1, W);
   }
}

void solve() {

   ll n;
   cin >> n;
   ll W;
   cin >> W;

   ll wt[n], val[n];
   for (int i = 0; i < n; i++) {
      cin >> wt[i] >> val[i];
   }
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < W; j++) {
         dp[i][j] = -1;
      } 
   }

   // display(dp);

   cout << knapsack(wt, val, n, W) << nl;

   // for (int i = 0; i < n; i++) {
   //    for (int j = 0; j < W; j++) {
   //       cout << dp[i][j] << " ";
   //    } 
   //    cout << nl;
   // }
   // display(dp);
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