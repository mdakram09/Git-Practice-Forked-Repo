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
#define line \
  { cout << '\n'; }
#define yes              \
  {                      \
    cout << "YES" << ln; \
    return;              \
  }
#define no              \
  {                     \
    cout << "NO" << ln; \
    return;             \
  }

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

void solve() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  vi one(n + 1);
  Fo(i, 1, n + 1) {
    ans |= i;
    one[i] = 1;
  }
  if (n == 2 && k == 2) {
    cout << -1 << ln;
    return;
  }
  vpii second;
  int diff = ans - k, pow = 1;
  while (diff) {
    if ((pow & diff) > 0) {
      second.pb(mp(ans, pow));
      one[pow] = 0;
      diff -= pow;
      ans ^= pow;
    }
    pow *= 2;
  }
  vi one_final;
  Fo(i, 1, n + 1) {
    if (one[i] == 1) {
      one_final.pb(i);
    }
  }
  cout << "1 " << one_final[0] << " " << one_final[1] << ln;
  int curr = one_final[0] | one_final[1];
  Fo(i, 2, one_final.size()) {
    cout << "1 " << curr << " " << one_final[i] << ln;
    curr |= one_final[i];
  }
  for (int i = 0; i < second.size(); i++)
    cout << "2 " << (second[i].first) << " " << (second[i].second) << ln;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}