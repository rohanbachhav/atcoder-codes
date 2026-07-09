#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

void solve() {

   int n, m;
   cin >> n >> m;
   int a, b;
   std::vector<std::vector<int>> adj(n + 1);
   for (int i = 0; i < n; i++) {
      cin >> a >> b;
      adj[a].pb(b);
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