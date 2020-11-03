#pragma region Region
#pragma region Includes
#include <bits/stdc++.h>
using namespace std;
#pragma endregion
#pragma region Setting
#pragma GCC optimize("Ofast")
#define FAST                   \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define CLS clock_t start = clock();
#define CLE              \
  clock_t end = clock(); \
  cout << end - start << " ms" << '\n';
#pragma endregion
#pragma region Defines
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
#define FREV(i, m, n) for (int i = m; i >= n; i--)
#define FORR(itr, dict) for (auto& itr : dict)
#define ALL(v) v.begin(), v.end()
#define SETPRE(n) cout << fixed << setprecision(n)
constexpr LL LLINF = LLONG_MAX;
constexpr int IINF = INT_MAX;
constexpr int MOD = 1e9 + 7;
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
  FAST;
  int ans = -IINF, mul;
  string s, rev;
  bool flag = false;
  VEC<int> tmpi, tmpj;
  FREV(i, 999, 913) {
    FREV(j, 999, 913) {
      mul = i * j;

      s = to_string(mul);
      rev = s;
      REP(i, s.size()) { rev[i] = s[s.size() - 1 - i]; }

      if (s == rev) {
        ans = max(ans, mul);
        flag = true;
        if (mul == 906609) {
          tmpi.emplace_back(i);
          tmpj.emplace_back(j);
        }
      }
      CO(i);
    }
  }

  CO("");
  REP(i, tmpi.size()) {
    cout << "i: " << tmpi[i] << " / j: " << tmpj[i] << '\n';
  }
  CO("");
  cout << "ans: " << ans << "\n";

  /* これらの組み合わせのみ */
  // i: 993 / j: 913
  // i: 913 / j: 993

  // ans: 906609
}