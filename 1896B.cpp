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
        ll  n; cin >> n;
        string s; cin >> s;
        ll cnt = 0;

        int arr[n+1] = {0};


        ll a_found = 1;
        for (ll i = n-1; i >= 0; i--)
        {
            if(s[i] == 'A')
            {
                arr[i] = 1;
                ll j = i+1;
                while(s[j] == 'B' && j < n)
                {
                    if(arr[j] == 0)
                    {
                        arr[j] = 1;
                        s[j-1]= 'B';
                        s[j] = 'A';
                        cnt++;
                    }else
                    {
                        arr[j] = 1;
                        s[j-1]= 'B';
                        s[j] = 'A';
                        cnt++;
                        break;
                    }
                    
                        j++;
                    
                }
                //cout << s << endl;
            }
        }
        

        cout <<cnt<< endl;
    }

    return 0;
}