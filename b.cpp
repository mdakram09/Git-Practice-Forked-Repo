#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) \
  for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "= " << x << endl
#define deb2(x, y) cout << #x << "=" << x << endl << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)
#define ln '\n';
#define yes cout << "YES" << ln;
#define no cout << "NO" << ln;

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve() {
  int x;
  cin >> x;
  int res[x][2];
  int theft[x] = {0};
  for (int i = 0; i < x; i++) cin >> res[i][0] >> res[i][1];

  for (int i = 0; i < x; i++) {
    int l = res[i][0], r = res[i][1];
    if (i + 1 >= l && i + 1 <= r) {
      if (l - r == 1) {
        theft[l - 1] = 3;
        theft[r - 1] = 3;
      } else {
        for (int j = l - 1; j < r; j++) theft[j] = 1;
      }
      theft[i] = 2;
    } else if (i + 1 < l || i + 1 > r) {
      
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}