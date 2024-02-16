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
        ll friend_strength; cin >> friend_strength;
        ll friend_endurance; cin >> friend_endurance;
        int flag = 0;
        n--;
        for(ll i =0; i < n; i++)
        {
            ll str, end; cin >> str >> end;
            if(str >= friend_strength && end >= friend_endurance)
            {
                flag = 1;
            }
        }
        
        if(flag == 0)
        {
            cout << friend_strength << endl;
        }else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}