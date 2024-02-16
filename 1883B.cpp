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
        string s; cin >> s;

        sort(s.begin(), s.end());
        ll _count = 1;
        ll _even = 0;
        ll _odd = 0;

        for(ll i=0; i < n; i++)
        {
            if(s[i] == s[i+1])
            {
                _count++;
            }
            else
            {
                if(_count % 2 == 0)
                {
                    _even++;
                }
                else
                {
                    _odd++;
                }
                _count = 1;
            }
        }

        if(_odd - k <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

    return 0;
}