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
        ll x,y; cin >> x >> y;
        if(abs(y-x) % 2 == 0)
        {
            cout << "Bob" << endl;
        }else
        {
            cout << "Alice" << endl;
        }
    }



    return 0;
}