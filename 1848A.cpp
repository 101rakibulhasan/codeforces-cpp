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
        int a,b,n; cin >> a >> b >> n;
        int x,y; cin >> x >> y;
        int flag = 0;
        while(n--)
        {
            int c,d; cin >> c >> d;
            if((abs(x-c)+abs(y-d)) % 2 == 0) flag = 1;  
        }

        if(flag == 0)
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}   