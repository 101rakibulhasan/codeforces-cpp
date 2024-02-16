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
        int n; cin >> n;
        string s; cin >> s;

        int large_holes = 0;
        int small = 0;

        for(ll i =0 ; i < s.size(); i++)
        {
            int _count = 0;
            while(s[i] == '.')
            {
                _count++;
                i++;
            }

            if(_count < 3)
            {
                small+=_count;
            }

            if(_count > large_holes)
            {
                large_holes = _count;
            }
        }

        if(large_holes < 3)
        {
            cout << small;
        }else
        {
            cout << 2;
        }

        cout << endl;
    }

    return 0;
}