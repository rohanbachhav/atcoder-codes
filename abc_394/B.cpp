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
   std::vector<str> s(n);
   map<int, str> mp;
   for (int i = 0; i < n; i++) {
      cin >> s[i];
      mp[s[i].size()] = s[i];
   }

   int c = 0;
   str ans = "";
   for (auto m : mp) {
      ans += m.second;
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