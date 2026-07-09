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

   str s, t;
   cin >> s >> t;
   int n = s.size(), m = t.size();
   map<char, int> mp;
   for (int i = 0; i < m; i++) {
      mp[t[i]]++;
   }

   for (int i = 1; i < n; i++) {
      if (s[i] < 97) {
         if (!mp[s[i - 1]]) {
            cout << "No";
            return;
         }
      }
   }

   cout << "Yes";
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