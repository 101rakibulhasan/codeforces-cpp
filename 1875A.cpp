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
        ll a,b, n; cin >> a >> b >> n;
        vector<ll> vec;
        for(int i=0; i < n; i++)
        {
            int x; cin >> x;
            vec.push_back(x);
        }

        for(ll i = 0; i < vec.size(); i++)
        {
            b+=min(1+vec[i],a)-1;
        }

        cout <<b << endl;
    }

    return 0;
}