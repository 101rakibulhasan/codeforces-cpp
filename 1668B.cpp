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
        long long int n,m; cin >> n >> m;
        long long int arr[n];
        for(int i=0; i < n; i++) cin >> arr[i];

        if(n>m)
        { 
            cout << "NO" << endl;
        }else
        {
            int sum = 2*arr[0] + 1;
            for(int i = 1; i < n-1; i++)
            {
                if(arr[i]>=arr[i-1])
                {
                    sum-= arr[i-1];
                    sum += arr[i];
                    sum++;
                }else if()
                {
                    sum += arr[i];
                    sum++;
                }
            }

            if(arr[n-1] )
            
            cout << "SUM: " << sum << endl;
            if(sum > m)
            {
                cout << "NO" << endl;
            }else
            {
                cout << "YES" <<endl;
            }
        }
    }

    return 0;
}