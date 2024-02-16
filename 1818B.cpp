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
        if(n == 1)
        {
            cout << 1 << endl;
        }else if(n & 1)
        {
            cout << -1 << endl;
        }else
        {
            for(ll i = 1; i <= n; i+=2)
            {
                cout << i+1 << " " << i << " ";
            }
            cout << endl;
        }
    
    }

    return 0;
}