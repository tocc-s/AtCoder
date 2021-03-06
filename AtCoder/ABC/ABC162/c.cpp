#pragma region Region
#pragma region Includes
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#pragma endregion
#pragma region Setting
#pragma GCC optimize("Ofast")
#define FAST                   \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
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

/* 最大公約数 */
template <class T>
int gcd(T x, T y) {
  if (x % y == 0)
    return y;
  else
    return gcd(y, x % y);
}

int main() {
  // auto start = system_clock::now();
  FAST;
  int n;
  cin >> n;

  LL sum = 0;
  FORE(i, 1, n) {
    FORE(j, 1, n) {
      FORE(k, 1, n) { sum += gcd(gcd(i, j), k); }
    }
  }

  CO(sum);

  // auto end = system_clock::now();
  // cout << duration_cast<milliseconds>(end-start).count() << " ms" << '\n';
}