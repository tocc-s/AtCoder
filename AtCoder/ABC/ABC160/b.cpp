#pragma region includes
#include <bits/stdc++.h>
using namespace std;
#pragma endregion
#pragma region defines
using ll = long long;
using pll = pair<ll, ll>;
constexpr ll MOD = 1e9 + 7;
constexpr ll LINF = 1e18;
constexpr int IINF = 1e9;
constexpr double PI = 3.14159265358979323846;
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) v.begin(), V.end()
template <class T>
void CO(T value) {
  cout << value << endl;
}
#pragma endregion

int main() {
  int X;
  cin >> X;

  int cnt500 = 0, cnt5 = 0, diff = 0;
  if (X >= 500) {
    cnt500 = X / 500;
    X %= 500;
  }
  if (X >= 5) {
    cnt5 = X / 5;
  }
  CO(cnt500 * 1000 + cnt5 * 5);
}