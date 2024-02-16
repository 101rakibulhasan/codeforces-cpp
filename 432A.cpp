#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,_count=0; cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0; i <= n-3; i++)
    {
        int a = arr[i] + k;
        int b = arr[i+1] + k;
        int c = arr[i+2] + k;

        if(a <=5 && b <= 5 && c<= 5)
        {
            _count++;
            i+=2;
        }
    }
    cout << _count << endl;
    return 0;
}
