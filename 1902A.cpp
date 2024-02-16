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
        int _count1 = 0;
        int _count0 = 0;

        for(ll i=0;i<s.size(); i++)
        {
            if(s[i] == '1') _count1++;
            else _count0++;

            if(s[i] != s[i+1])
            {
                if(i+1 < s.size())
                {
                    _count0++;
                }
                
            }else
            {
                _count1++;
            }
        }

        //cout << _count0 << " " << _count1 << endl;

        if(_count0 > 0)
        {
            cout << "YES";
        }else
        {
            cout << "NO";
        }


        cout << endl;
    }

    return 0;
}