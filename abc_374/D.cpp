#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define nl "\n"

using str = string;
using ll = long long;
using ld = long double;

int const MOD = 1e9 + 7;

struct point {
   ld x, y;
};

int n;
ld ans;
ld s, t;
std::vector<pair<point, point>> segments(7);

ld square(ld x) {
   return x * x;
}

void recurse(int k, int segNum, point curPos, ld timetaken, vector<bool> visited) {
   if (k < 0) {
      return;
   }
   ld newtimetaken = timetaken + sqrt(square(curPos.x - segments[segNum].first.x) + square(curPos.y - segments[segNum].first.y)) / s   ;
   point newCurPos;
   newCurPos.x = segments[segNum].first.x;
   newCurPos.y = segments[segNum].first.y;
   newtimetaken += sqrt(square(newCurPos.x - segments[segNum].second.x) + square(newCurPos.y - segments[segNum].second.y)) / t;
   newCurPos.x = segments[segNum].second.x;
   newCurPos.y = segments[segNum].second.y;
   for (int i = 0; i < n; i++) {
      if (!visited[i]) {
         visited[i] = 1;
         recurse(k - 1, i, newCurPos, newtimetaken, visited);
         visited[i] = 0;
      }
   }
   if (k == 0) {
      ans = min(ans, newtimetaken);
   }

   newtimetaken = timetaken + sqrt(square(curPos.x - segments[segNum].second.x) + square(curPos.y - segments[segNum].second.y)) / s;
   newCurPos.x = segments[segNum].second.x;
   newCurPos.y = segments[segNum].second.y;
   newtimetaken += sqrt(square(newCurPos.x - segments[segNum].first.x) + square(newCurPos.y - segments[segNum].first.y)) / t;
   newCurPos.x = segments[segNum].first.x;
   newCurPos.y = segments[segNum].first.y;
   for (int i = 0; i < n; i++) {
      if (!visited[i]) {
         visited[i] = 1;
         recurse(k - 1, i, newCurPos, newtimetaken, visited);
         visited[i] = 0;
      }
   }
   if (k == 0) {
      ans = min(ans, newtimetaken);
   }  
}

void solve() {

   cin >> n >> s >> t;
   for (int i = 0; i < n; i++) {
      cin >> segments[i].first.x >> segments[i].first.y >> segments[i].second.x >> segments[i].second.y;
   }
   point curPos = {0, 0};
   ans = (ld)1e18;
   std::vector<bool> visited(n);

   for (int i = 0; i < n; i++) {
      visited[i] = 1;
      recurse(n - 1, i, curPos, 0, visited);
      visited[i] = 0;
   }
   cout << ans << nl;
}

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);

   int TESTCASES = 1;
   // cin >> TESTCASES;
   cout << setprecision(15);
   while (TESTCASES--) {
      solve();
   }
   return 0;
}