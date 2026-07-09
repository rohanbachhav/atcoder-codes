#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   str s;
   cin >> s;
   int n = s.size();
   if (n < 3) {
      cout << "No\n";
      return;
   }
   str t = "san";
   for (int i = n - 3; i < n; i++) {
      if (s[i] != t[i - (n - 3)]) {
         cout << "No\n";
         return;
      } 
   }
   cout << "Yes\n";

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