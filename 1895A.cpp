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
        ll x,y,k; cin >> x >> y >> k;
        if(x > y)
        {
            cout << x;
        }else
        {
            ll ans = x + k;
            if(y == ans)
            {
                cout << ans;
            }else if(ans > y)
            {
                cout << y;
            }else
            {
                ans += 2 * (y-ans);
                cout << ans;
            }

        }

        cout << endl;
    }

    return 0;
}