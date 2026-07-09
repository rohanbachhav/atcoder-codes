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

   str s;
   cin >> s;
   int n = s.size();
   int ans = 0;
   for (int i = 0; i < n - 2; i++) {
   	if (s[i] == 'A') {
   		for (int j = i + 1; j < n - 1; j++) {
   			if (s[j] == 'B') {
   				if (j + (j - i) < n && s[j + (j - i)] == 'C') {
   					ans++;
   				}
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