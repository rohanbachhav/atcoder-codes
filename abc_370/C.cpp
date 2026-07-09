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
   str s, t;
   cin >> s >> t;
   n = s.size();

   vector<str> ans;

   int pos = 0;

   while (s != t && pos < n) {
      if (s[pos] > t[pos]) {
         s[pos] = t[pos];
         ans.pb(s);
      }
      pos++;
   }

   pos = n - 1;
   while (s != t && pos >= 0) {
      if (s[pos] < t[pos]) {
         s[pos] = t[pos];
         ans.pb(s);
      }
      pos--;
   }

   cout << ans.size() << nl;
   for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << nl;
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