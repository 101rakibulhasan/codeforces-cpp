#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        for(int i = 0 ; i < n; i++) cin >> arr[i];
        sort(arr,arr+n);
        int diff[n-1];
        for(int i = 0 ; i < n-1; i++)  diff[i] = arr[i+1] - arr[i];
        sort(diff,diff+n-1);

        cout << diff[0] << endl;
        
    }
    return 0;
}
