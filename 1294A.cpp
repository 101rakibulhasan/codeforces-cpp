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
        int arr[4] = {0};
        for(int i = 0; i <4; i++)
        {
            cin >> arr[i];
        } 

        sort(arr, arr+3);

        int x = arr[3] - (2 * arr[2] - arr[0] - arr[1]);
        if(x < 0)
        {
            if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0] && arr[3]%3 == 0){
                cout << "YES" << endl;
            }else
            {
                cout << "NO" << endl;
            }
        }else
        {
            if(x % 3 == 0){
                cout << "YES" << endl;
            }else
            {
                cout << "NO" << endl;
            }
        }
        
    }

    return 0;
}