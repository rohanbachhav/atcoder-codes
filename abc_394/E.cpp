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
int N = 110;
int n;
std::vector<str> s(N);
std::vector<std::vector<int>> graph(N);

bool isPalindrome(str &a) {
	int x = a.size();
	for (int i = 0; i < x / 2; i++) {
		if (a[i] != a[x - i - 1]) {
			return false;
		}
	}
	return true;
}

void dfs(int pos, int end, std::vector<bool> vis, std::vector<str> &res, str a) {
	if (pos == end) {
		if (isPalindrome(a)) 
			res.pb(a);
		return;
	}
	// debug(a);
	for (int child : graph[pos]) {
		if (vis[child]) continue;
		vis[child] = 1;
		a.pb(s[pos][child]);
		dfs(child, end, vis, res, a);
		a.pop_back();
	}
	return;
}

std::vector<str> palindromicPaths(int pos, int end) {
	std::vector<str> res;
	std::vector<bool> vis(n);
	dfs(pos, end, vis, res, "");
	return res;
}

void solve() {

   cin >> n;
   for (int i = 0; i < n; i++) {
   	cin >> s[i];
   }
   for (int i = 0; i < n; i++) {
   	for (int j = 0; j < n; j++) {
   		if (s[i][j] != '-') {
   			graph[i].pb(j);
   		}
   	}
   }
   // debug(graph);
   for (int i = 0; i < n; i++) {
   	for (int j = 0; j < n; j++) {
   		if (i == j) {
   			cout << 0 << " ";
   			continue;
   		}
   		int ans = 1e9;
   		vector<str> paths = palindromicPaths(i, j);
   		debug(paths);
   		for (int j = 0; j < paths.size(); j++) {
   			if (isPalindrome(paths[j])) {
   				ans = min(ans, int(paths[j].size()));
   			}
   		}
   		if (ans == 1e9) {
   			cout << -1 << " ";
   		} else {
   			cout << ans << " ";
   		}
   	}
   	cout << nl;
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