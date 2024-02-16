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
        int n,k; cin >> n >> k;
        string s; cin >> s;
        ll _cA = 0, _cB = 0;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] == 'A') _cA++;
            else _cB++;
        }

        ll step = 1;

        ll bef_cB = _cB;
        ll bef_cA = _cA;

        ll _count =0;
        if(_cB == k)
        {
            cout << "0" << endl;
        }else
        {
            for(ll i = 0; i < n; i++)
            {
                if(_cB < k)
                {
                    if(s[i] == 'A') {
                    _cB++;
                    _cA--;
                    }

                    _count++;
                }else
                {
                    if(s[i] == 'B') {
                    _cB--;
                    _cA++;
                    }
                    _count++;
                }

                    if(_cB == k)
                    {
                        
                            // cout << step << endl;
                            // if(_cA - bef_cA > 0)
                            // {
                            //     cout << _cA - bef_cA  << " " << "A" << endl;
                            // }else
                            // {
                            //     cout << bef_cA - _cA  << " " << "B" << endl;
                            // }

                            cout<<step<<endl;

                            if(bef_cB - _cB > 0)
                            {
                                cout <<  _count << " " << "A" << endl;
                            }else
                            {
                                cout << _count << " " << "B" << endl;
                            }
                            break;
                    }
            }
        }
        
    }

    return 0;
}