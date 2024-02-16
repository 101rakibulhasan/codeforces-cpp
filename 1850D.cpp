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

    ll tc; cin >> tc;
    while(tc--)
    {
        ll n, m; cin >> n >> m;
        vector<ll> vec;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            vec.push_back(x);
        }

        sort(all(vec));

        ll _count = 0;
        ll temp = 0;

        vector<ll> num;

        for(ll i = 1; i < n; i++)
        {
            if(vec[i] - vec[i - 1] <= m)
            {
                temp++;
            }else
            {
                temp = 0;
            }
            _count =  max(temp, _count);

        }

        cout << n - (_count + 1) << endl;
    }

    return 0;
}