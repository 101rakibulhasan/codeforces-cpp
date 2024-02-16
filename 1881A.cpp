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
        ll n,m; cin >> n >> m;
        string x; cin >> x;
        string s; cin >> s;

        ll x_size = x.length();
        ll s_size = s.length();

        ll i = 6;
        ll _count = 0;

        ll found = 0;
        
        while(i--)
        {
            if(x.find(s) != string::npos){
                found =1;
                break;
            }

            _count++;
            x+= x;
        }
        
        if(found ==1)
        {
            cout << _count << endl;
        }else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}