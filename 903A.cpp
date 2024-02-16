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
        int x; cin >> x;
        
        if(x >= 12 || x % 3 == 0 || x % 7 == 0 || x == 10)
        {
            cout << "YES" << endl;
            
        }else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}