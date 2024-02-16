#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        vector<long long int> v;
        for(long long int i=0; i <n;i++)
        {
            long long int x; cin >> x;
            v.push_back(x);
        }

        long long int  currentGCD = v.front();
        //cout << currentGCD << endl;

        for(long long int i = 1; i < n; i++)
        {  
            currentGCD = __gcd(v[i], currentGCD);
            //cout << currentGCD << endl;
            //_min = min(currentGCD, _min);
        }

        //cout << (v.back())/_min << endl;
        //cout << currentGCD << endl;
        cout << (v.back())/currentGCD << endl;
    }

    return 0;
}