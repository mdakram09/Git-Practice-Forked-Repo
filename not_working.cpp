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
  int n, x, res;
  res = 0;
  cin >> n;
  vi v(n);

  for (int i = 0; i < n; i++) cin >> v[i];
  sortall(v);

  ll i = 0, count = 0, sum = 0;
  while (i < n) {
    sum += v[i];
    if (sum >= n) break;
    count++;
    i++;
  }

  cout << count << endl;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}