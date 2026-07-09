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
int n;
int target;
str s;
bool f = false;

void recurse(int num) {
   if (s[num - 1] == '1' || f) {
      return;
   }
   debug(num);
   if (num == target) {
      f = true;
      return;
   }
   for (int i = 0; i < n; i++) {
      if ((num | (1 << i)) != num) {
         recurse(num | (1 << i));
      }
   }
}

void solve() {

   cin >> n;
   cin >> s;
   target = pow(2, n) - 1;
   f = false;

   recurse(0);

   if (f) {
      cout << "Yes\n";
   } else {
      cout << "No\n";
   }

}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int TESTCASES = 1;
   cin >> TESTCASES;

   while (TESTCASES--) {
      solve();
   }
   return 0;
}