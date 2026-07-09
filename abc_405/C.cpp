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
   vector<ll> v(n);
   ll sum = 0;
   for (int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];   
   }

   ll ans = 0;
   for (int i = 0; i < n - 1; i++) {
      sum -= v[i];
      ans += v[i] * sum;
   }

   cout << ans;

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