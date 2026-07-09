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

unordered_map<char, int> symbols = {{'(', -1}, {'[', -2}, {'<', -3},
                                     {')', 1}, {']', 2}, {'>', 3}};

str isBalanced(str s) {
   stack<char> st;
   for (char c : s) {
      if (symbols[c] < 0) {
         st.push(c);
      } else {
         if (st.empty()) {
            return "No";
         } else if (symbols[st.top()] + symbols[c] != 0) {
            return "No";
         }
         st.pop();
      }
   }
   if (!st.empty()) return "No";
   return "Yes";
}

void solve() {

   str s;
   cin >> s;
   cout << isBalanced(s) << nl;

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