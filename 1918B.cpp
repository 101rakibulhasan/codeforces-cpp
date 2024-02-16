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
        vector<pair<ll, ll >> vec1;
        vector<ll> vec2;

        for(ll i=0 ; i < n; i++)
        {
            ll x; cin >> x;
            vec1.push_back(make_pair(i,x));
        }

        for(ll i=0 ; i < n; i++)
        {
            ll x; cin >> x;
            vec2.push_back(x);
        }

        sort(vec1.begin(), vec1.end(), [](pair<ll, ll> a, pair<ll, ll> b)
        {
            return a.second < b.second;
        });      

        for(ll i=0 ; i < n; i++)
        {
            cout << vec1[i].second << " ";
        }
        cout << endl;

        for(ll i=0 ; i < n; i++)
        {
            cout << vec2[vec1[i].first] << " ";
        }
        cout << endl;
    }

    return 0;
}