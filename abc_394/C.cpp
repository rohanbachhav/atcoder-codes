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
   str s;
   cin >> s;
   n = s.size();
   for (int i = 1; i < n; i++) {
      int j = i;
      while (j >= 1 && s[j - 1] == 'W' && s[j] == 'A') {
         if (s[j - 1] == 'W' && s[j] == 'A') {
            s[j - 1] = 'A';
            s[j] = 'C';
         }
         j--;
      }
   }
   cout << s << nl;

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