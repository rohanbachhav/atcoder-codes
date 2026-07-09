#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   int n, q;
   cin >> n >> q;

   char h;
   int t;
   int left = 1, right = 2;
   int answer = 0;
   for (int i = 0; i < q; i++) {
      cin >> h >> t;
      if (h == 'L') {
         int j = left;
         int steps = 0;
         while (j != t && j != right) {
            j++;
            steps++;
            if (j > n) {
               j = 1;
            }
         }
         int ans = 1000000;
         if (j == t) {
            ans = steps;
         }
         steps = 0;
         j = left;
         while (j != t && j != right) {
            j--;
            steps++;
            if (j < 1) {
               j = n;
            }
         }
         if (j == t) {
            ans = min(ans, steps);
         }
         left = t;
         answer += ans;
      } else {
         int j = right;
         int steps = 0;
         while (j != t && j != left) {
            j++;
            steps++;
            if (j > n) {
               j = 1;
            }
         }
         int ans = 1000000;
         if (j == t) {
            ans = steps;
         }
         steps = 0;
         j = right;
         while (j != t && j != left) {
            j--;
            steps++;
            if (j < 1) {
               j = n;
            }
         }
         if (j == t) {
            ans = min(ans, steps);
         }
         right = t;
         answer += ans;
      }
   }
   cout << answer << nl;

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