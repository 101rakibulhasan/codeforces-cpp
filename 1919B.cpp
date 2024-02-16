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
        string s; cin >> s;
        ll plus = 0;
        ll minus = 0;

        for(ll i = 0; i < n; i++)
        {
            if(s[i] == '+')
                plus++;
            else
                minus++;
        }
        cout <<abs(plus - minus)<< endl;
    }

    return 0;
}