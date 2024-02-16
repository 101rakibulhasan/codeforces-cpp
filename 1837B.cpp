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

        ll a,b,c;
      
        char prev = s[0];
        
            a=b=c=1;
            for(int i=1;i<n;i++)
            {
                if(s[i-1]==s[i])c++;
                else c=1;
                a=max(c,a);
            }
            
            cout<<a+1<<endl;
        

    }

    return 0;
}