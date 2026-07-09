#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;
std::vector<ll> v(21);
int n;
ll ans;

void recurse(int k, ll sum, ll pref) {
   if (k < 0) {
      return;
   }
   ans = min(ans, max(sum - v[k], pref + v[k]));
   ans = min(ans, max(sum, pref));
   recurse(k - 1, sum - v[k], pref + v[k]);
   recurse(k - 1, sum, pref);
}

void solve() {

   cin >> n;
   for (int i = 0; i < n; i++) {
      cin >> v[i];
   }
   ans = 1e18;
   ll sum = accumulate(v.begin(), v.begin() + n, 0);
   recurse(n - 1, sum, 0);
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