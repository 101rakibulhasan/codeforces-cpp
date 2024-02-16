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
        vector<ll> vec;
        vector<ll> pre;       

        for(ll i = 0; i < n; i++)
        { 
            string x; cin >> x;
            char v = x[x.size()-1];
            ll c = v-'0';
            vec.push_back(c);

            if(i==0)
            {
                pre.push_back(c);
            }else
            {
                pre.push_back(pre[i-1]+c);
            }

            //cout << pre[i] << " ";
        }

        while(k--)
        {

            ll l,r,p; cin >> l >> r >> p;
            l--,r--;

            ll sum = 0;

            sum = pre[pre.size()-1];
            //cout << sum << endl;
            sum -= pre[r];
            //cout << sum << endl;
            if(l-1 >= 0)
            {
                sum +=pre[l-1];
            }
            //cout << sum << endl;
            sum += p * (r-l+1);
            //cout << sum << endl;

            if(sum & 1)
            {
                cout << "YES" << endl;
            }else
            {
                cout << "NO" << endl;
            }
            
        }

    }

    return 0;
}