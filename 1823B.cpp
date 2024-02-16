#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        ll n,k; cin >> n >> k;
        vector<ll> vec;
        for (ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            vec.push_back(x);
        }

        ll _count  = 0;

        for (ll i = 0; i < n; i++)
        {
            if(vec[i] % k != ((i+1)%k))
            {
                _count++;
            }
        }

        if(_count == 0)
        {
            cout << 0 << endl;
        }else if(_count == 2)
        {
            cout << 1 << endl;
        }else
        {
            cout << -1 << endl;
        }
        
        

        
    }

    return 0;
}