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
        long long int gifts[n];
        long long int oranges[n];
        for(int i=0; i <n; i++) cin >> gifts[i];
        for(int i=0; i <n; i++) cin >> oranges[i];
        long long int x = *min_element(gifts, gifts+n);
        long long int y = *min_element(oranges, oranges+n);

        long long int _count = 0;
        for(int i=0; i <n; i++)
        {
            if(abs(gifts[i] - x) > abs(oranges[i] - y))
            {
                _count += abs(gifts[i] - x);
            }else
            {
                _count += abs(oranges[i] - y);
            }
        }
        
        cout << _count << endl;
    }

    return 0;
}