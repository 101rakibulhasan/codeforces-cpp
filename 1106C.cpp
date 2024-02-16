#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    long long int n; cin >> n;
    long long int arr[n];
    for(long long int tc = 0; tc <n; tc++)
    {
        // printf("Case %d:", tc);
        cin >> arr[tc];
    }

    sort(arr,arr+n);

    long long int sum = 0;

    for (int i = 0; i < n/2; i++)
    {
        sum += (arr[i] + arr[n-i-1]) * (arr[i] + arr[n-i-1]);
    }
    
    cout << sum << endl;

    return 0;
}