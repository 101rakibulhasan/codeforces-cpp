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
        int n,s,t; cin >> n >> s >> t;
        
            int _min = min(s,t);
            cout << n-_min + 1 << endl;
        
    }

    return 0;
}