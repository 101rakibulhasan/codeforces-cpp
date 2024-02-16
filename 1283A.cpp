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
        int h,m; cin >> h >> m;
        if(h == 0 && m == 0)
        {
            cout << 0 << endl;
        }else if(h == 0 && m != 0)
        {
            cout << 24 * 60 - m << endl;
        }
        else
        {
            cout << ((24 * 60) - (h * 60 + m))  << endl;
        }
    }

    return 0;
}