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
        

    string s; cin >> s;
    ll n ; n = s.size();

    int flag = 0;
    int brac = 0;

    for(int i=0; i < n-1; i++)
    {
        if(s[i] == '(' && s[i+1] == ')')
        {
            brac++;
        }
        if((s[i] == ')' && s[i+1] == ')' ) || (s[i] == '(' && s[i+1] == '(' ))
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        if((s[0] == ')' || s[n-1] == '(' ) || ((s[0] == '(' || s[n-1] == ')') && brac > 1))
        {
            //cout << brac << endl;
            cout << "YES" << endl;
            for(int i = 0; i< n; i++)
            {
                cout << '(' ;
            }

            for(int i = 0; i< n; i++)
            {
                cout << ')' ;
            }

            cout << endl;
        }else
        {
            cout << "NO"  << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
        for(ll i = 0; i < 2*n; i++)
        {
            if(i%2 == 0)
            {
                cout << "(";
            }
            else
            {
                cout << ")";
            }
        }
        cout << endl;
    }

    }
    return 0;
}