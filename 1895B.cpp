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
        int n; cin >> n;
        vector<ll> vec;
        vector<pair<ll,ll>> ans;
        for(ll i=0; i <2*n; i++)
        {
            ll x; cin >> x;
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end());

        for(ll i=0; i <n; i++)
        {
            ans.push_back(make_pair(vec[i], vec[2*n-i-1]));
        }

        ll mod = 0;

        for (ll i = 0; i < ans.size()-1; i++)
        {
            mod += abs(ans[i].first - ans[i+1].first);
            mod += abs(ans[i].second - ans[i+1].second);
        }

        cout << mod << endl;

        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
        
    }

    return 0;
}