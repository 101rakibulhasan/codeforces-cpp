#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int arr[n];
    for(int i=0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    long long int _max = arr[n-1];
    long long int _count = 0;
    for(int i=0; i < n; i++) _count += (_max - arr[i]);
    cout << _count << endl;

    return 0;
}
