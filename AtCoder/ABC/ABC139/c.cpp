#pragma region Region
#pragma region includes
#include <bits/stdc++.h>
using namespace std;
#pragma endregion
#pragma region defines
using LL = long long;
template <class T>
using P = pair<T, T>;
template <class T>
using VEC = vector<T>;
template <class T>
using GRAPH = vector<vector<T>>;
using PQ = priority_queue<int>;
using RPQ = priority_queue<int, vector<int>, greater<int>>;
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPE(i, n) for (int i = 0; i <= n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define FORE(i, m, n) for (int i = m; i <= n; i++)
#define FORR(itr, dict) for (auto& itr : dict)
#define ALL(v) v.begin(), v.end()
#define SETPRE(n) cout << fixed << setprecision(n)
constexpr int MOD = 1e9 + 7;
constexpr LL LINF = 1e18;
constexpr int IINF = 1e9;
constexpr double PI = 3.14159265358979323846;
void string_lower(string& s, int n) { s[n] = s[n] + ('a' - 'A'); }
void string_upper(string& s, int n) { s[n] = s[n] - ('a' - 'A'); }
template <class T>
void CO(T value) {
  cout << value << "\n";
}
#pragma endregion
#pragma endregion Region
///////////////////////////////////////////////////////////////////////////////

int main() {
  int n;
  cin >> n;
  VEC<int> h(n);
  REP(i, n) cin >> h[i];

  int cnt = 0, ans = -1;
  REP(i, n - 1) {
    if (h[i] >= h[i + 1]) cnt++;
    else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }

  ans = max(ans, cnt); // cnt が最大値のままループを抜けた場合、ここで ans を更新
  CO(ans);
}