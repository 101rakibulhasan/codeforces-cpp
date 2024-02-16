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
        for(int i = 0; i < n; i++)
        {
            for(int j = 'a'; j <= 'a' + k-1; j++)
            {
                cout << char(j);
            }
        }
        cout << endl;
    }

    return 0;
}