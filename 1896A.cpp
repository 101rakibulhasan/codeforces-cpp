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
        ll n; cin >> n;
        vector<ll> vec;
        for(ll i=0; i < n; i++)
        {
            ll x; cin >> x;
            vec.push_back(x);
        }

        ll minElement = *min_element(vec.begin(), vec.end());
        
       if(vec[0] == minElement)
       {
            cout << "YES" << endl;
       }else
       {
              cout << "NO" << endl;
       }
    }

    return 0;
}