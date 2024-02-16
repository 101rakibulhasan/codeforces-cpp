#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    long long int arr[10001] = {0};
    for(int i = 1; i < 10001; i++)
    {
        int j = i+1;
        while(j--)
        {
            arr[i]+= j;
        }

        if(i != 1)
        {
            arr[i]+= arr[i-1];
        }
        
    }

    // for(int i = 1; i < 25; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    //cout << endl;

    int n; cin >> n;

    for(int i = 1; i < 10001; i++)
    {
        if(arr[i] > n)
        {
            cout << i - 1 << endl;
            break;
        }else if(arr[i] == n)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}