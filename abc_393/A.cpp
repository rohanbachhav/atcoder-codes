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

   str a, b;
   cin >> a >> b;
   if (a == "sick" && b == "sick") {
   	cout << 1;
   } else if (a == "sick") {
   	cout << 2;
   } else if (b == "sick") {
   	cout << 3;
   } else {
   	cout << 4;
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