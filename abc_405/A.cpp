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

   int r, d;
   cin >> r >> d;

   if (d == 2) {
      if (r >= 1200 && r <= 2399) {
         cout << "Yes";
         return;
      }
   } else {
      if (r >= 1600 && r <= 2999) {
         cout << "Yes";
         return;
      }
   }

   cout << "No";

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