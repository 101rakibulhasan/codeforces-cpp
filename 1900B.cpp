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
        ll a,b,c; cin >> a >> b >> c;
        if(abs(b-c)%2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        if(abs(a-c)%2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        if(abs(a-b)%2 == 0) cout << 1 << " ";
        else cout << 0 << " ";
        cout << endl;
    }

    return 0;
}