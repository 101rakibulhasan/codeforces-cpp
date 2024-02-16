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
        ll n,k; cin >> n >> k;
        vector<ll> v;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            v.push_back(x);
        }

        vector<ll> v_sort;
        v_sort = v;
        sort(v_sort.begin(), v_sort.end());

        if(v == v_sort)
        {
            cout << "YES" << endl;
        }else
        {
            if(k == 1)
            {
                cout << "NO" << endl;
            }else 
            {
                cout << "YES" << endl;
            }
            
        }

        
    }

    return 0;
}   