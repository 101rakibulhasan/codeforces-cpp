#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long int arr[n], freq[n];
        for(int i = 0 ; i < n; i++) cin >> arr[i];
        long long int max_val =  *max_element(arr,arr+n);
        for(int i = 0 ; i < n; i++) freq[i] = max_val - arr[i];
        sort(freq, freq+n);
        int _count = freq[0];
       // 1 0 2 0 3 2
       // 0 0 1 2 2 3
        for(int i = 1 ; i < n; i++)
        {
            int v = freq[i] - freq[i-1];
            _count += v;
        }

        cout << _count << endl;
    }
    return 0;
}
