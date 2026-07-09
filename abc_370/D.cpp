#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   int h, w;
   cin >> h >> w;
   int q;
   cin >> q;

   int ans = h * w;

   vector<vector<int>> a(h, vector<int>(w));
   for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
         a[i][j] = 1;
      }
   }

   vector<vector<vector<int>>> b(h, vector<vector<int>>(w, vector<int>(4)));

   for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
         b[i][j][0] = max(0, i - 1);
         b[i][j][1] = min(h - 1, i + 1);
         b[i][j][2] = max(0, j - 1);
         b[i][j][3] = min(w - 1, j + 1); 
      }
   }

   int r, c;

   while (q--) {
      cin >> r >> c;
      r--;
      c--;

      if (a[r][c]) {
         a[r][c] = 0;
         ans--;
      }
      else {
         for (int i = b[r][c][0]; i >= 0; i--) {
            if (a[i][c]) {
               a[i][c] = 0;
               b[r][c][0] = i;
               ans--;
               break;
            }
         }
         for (int i = b[r][c][1]; i < h; i++) {
            if (a[i][c]) {
               a[i][c] = 0;
               b[r][c][1] = i;
               ans--;
               break;
            }
         }
         for (int i = b[r][c][2]; i >= 0; i--) {
            if (a[r][i]) {
               a[r][i] = 0;
               b[r][c][2] = i;
               ans--;
               break;
            }
         }
         for (int i = b[r][c][3]; i < w; i++) {
            if (a[r][i]) {
               a[r][i] = 0;
               b[r][c][3] = i;
               ans--;
               break;
            }
         }
      }
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