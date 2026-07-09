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
vector<vector<set<int>>> GRAPHS;

void form(vector<set<int>> g, int node, int n) {
   {  
      bool f = true;
      for (int i = 0; i < g.size(); i++) {
         if (g[i].size() != 2) f = false;
      }
      if (f) {
         GRAPHS.pb(g);
         return;
      }
      if (node <= 0 && !f) return;
   }
   if (g[node].size() == 2) {
      form(g, node - 1, n);
      return;
   } else if (g[node].size() > 2) {
      return;
   }
   for (int i = n - 1; i >= 0; i--) {
      if (node == i) {
         continue;
      }
      if (g[i].size() < 2 && count(g[node].begin(), g[node].end(), i) == 0) {
         g[node].insert(i);
         g[i].insert(node);
      } else {
         continue;
      }
      for (int j = n - 1; j >= 0; j--) {
         if (node == j) {
            continue;
         } 
         if (g[j].size() < 2 && g[node].size() < 2 && count(g[node].begin(), g[node].end(), j) == 0) {
            g[node].insert(j);
            g[j].insert(node);
         } else {
            continue;
         }
         // debug(g);
         form(g, j, n);
         g[node].erase(j);
         g[j].erase(node);
      }
      form(g, i, n);
      g[node].erase(i);
      g[i].erase(node);
   }
   form(g, node - 1, n);
}

void solve() {

   int n, m;
   cin >> n >> m;
   vector<set<int>> graph(n);
   for (int i = 0; i < m; i++) {
      int u, v;
      cin >> u >> v;
      u--, v--;
      graph[u].insert(v);
      graph[v].insert(u);
   }

   vector<set<int>> g(n);
   form(g, n - 1, n);

   debug(GRAPHS);

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