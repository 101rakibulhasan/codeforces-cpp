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
        long long int n; cin >> n;
        if(n % 2 == 0)
        {
            cout << n / 2 << endl;
        }else
        {
            long long int x = n / 2;

            if(x + x+ 1 == n) x++;
            cout << x << endl;
        }
    }
    

    return 0;
}