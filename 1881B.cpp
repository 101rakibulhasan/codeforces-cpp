#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll tc; cin >> tc;
    while(tc--)
    {
        ll a, b, c; cin >> a >> b >> c;
        ll _min = gcd(a, gcd(b,c));
        ll sum = a/_min + b/_min + c/_min - 3;
        if(sum > 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }

    return 0;
}