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
        int a, b; cin >> a >> b;
        // 1 2
        // 3 4 5
        // 6 7 8

        if(a <= 2)
        {
            cout << 1 << endl;
        }else
        {
            int x = 3, _count = 0;
            while (x <= a)
            {
                x += b;
                _count++;
            }
            cout << _count+1 << endl;
        }
        
    }

    return 0;
}