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
        ll a,b; cin >> a >> b;
        ll diff = LLONG_MIN;
        ll num = a;

        ll flag = 1;
        for(ll i = a; i <= b; i++)
        {
            ll _min=LLONG_MAX, _max = LLONG_MIN;
            ll x = i;
            while (x !=0)
            {
                ll tem = x%10;
                _min = min(_min,tem);
                _max = max(_max,tem);  
                x =x/10;
            }

            if(_max - _min == 9)
            {
                cout << i << endl;
                flag = 0;
                break;
            }

            if(diff< _max - _min){
                diff = _max - _min;
                num = i;
            }
        }

        if(flag == 1)cout << num << endl;
    }

    return 0;
}