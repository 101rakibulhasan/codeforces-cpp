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

    ll n,k; cin >> n >> k;
    vector<ll> vec;
    for(ll i=0; i < n; i++)
    {
        ll x; cin >> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    vector<ll> res;
    res.push_back(0);
    for(ll i=1; i <= n; i++)
    {
        res.push_back(res[i-1] + vec[i-1]);
    }

    while(k--)
    {
        ll x, y; cin >> x >> y;
        ll first = n-x;

        cout << res[first+y] - res[first] << endl;
    }

    return 0;
}