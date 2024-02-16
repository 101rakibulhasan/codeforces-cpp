#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll n; cin >> n;
    string s; cin >> s;

    ll _count_l = 0;
    ll _count_o = 0;

    for (ll i = 1; i < n; i++) {
        if (count(s.begin(), s.begin() + i, 'L') != count(s.begin() + i, s.end(), 'L') &&
            count(s.begin(), s.begin() + i, 'O') != count(s.begin() + i, s.end(), 'O')) {
            cout << i;
            return 0;
        }
    }
    cout << -1;

    return 0;
}