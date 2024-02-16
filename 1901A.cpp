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
        ll n,x; cin >> n >> x;
        vector <ll> vec;
        vec.push_back(0);
        for(ll i = 0; i < n; i++)
        {
            ll b; cin >> b;
            vec.push_back(b);
        }
        vec.push_back(x);
        int min = 0;
        sort(vec.begin(), vec.end());
        for(ll i = 0; i <vec.size()-1; i++)
        {
            // 0 1 2 5 6
            if(i == vec.size()-2)
            {
                if(2*(vec[i+1] - vec[i]) > min)
                {
                    min = 2*(vec[i+1] - vec[i]);
                    // cout << min << "sdad" << endl;
                }

            }else{
                if(vec[i+1] - vec[i] > min)
                {
                    min = vec[i+1] - vec[i];
                    // cout << min << endl;
                }
            }
            // cout << "MIN: "<<min << endl;
            

            // cout << vec[i] << " ";
        }

        cout << min << endl;
    }

    return 0;
}   