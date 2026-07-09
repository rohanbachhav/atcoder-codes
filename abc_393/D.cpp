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
ll n;

ll distance(ll mn, int closest, ll average, std::vector<ll> &v) {
   int m = v.size();
   int c = 1;
   ll ans = 0;
   ans += mn;
   int l = closest - 1, r = closest + 1;
   int left = average - 1, right = average + 1;

   while ((l >= 0) && (left >= 0) && (c < m)) {
      ans += abs(v[l] - left);
      l--;
      left--;
      c++;
   }
   while ((r < m) && (right < n) && (c < m)) {
      ans += abs(v[r] - right);
      r++;
      right++;
      c++;
   }
   return ans;
}

void solve() {

   cin >> n;
   str s;
   cin >> s;
   std::vector<ll> v;
   for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
         v.pb(i);
      }
   }
   ll m = v.size();
   ll sum = 0;
   for (int i = 0; i < m; i++) {
      sum += v[i];
   }
   ll average = sum / m;
   int mn = 1e6;
   ll closest = -1;
   for (int i = 0; i < m; i++) {
      if (abs(v[i] - average) < mn) {
         mn = abs(v[i] - average);
         closest = i;
      }
   }
   ll ans = 1e18;
   ans = min(ans, distance(mn, closest, average, v));
   if (closest - 1 >= 0) {
      ans = min(ans, distance(abs(average - v[closest - 1]), closest - 1, average, v));
   }
   if (closest + 1 < m) {
      ans = min(ans, distance(abs(average - v[closest + 1]), closest + 1, average, v));
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