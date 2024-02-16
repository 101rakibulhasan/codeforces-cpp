#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum = 0; cin >> t;
    int arr[t];

    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr,arr+t);

    int mid = sum / 2;
    int new_sum = 0;
    int _count = 0;

    for(int i = t-1; i >= 0; i--)
    {
        new_sum+= arr[i];
        _count++;
        if(new_sum == mid)
        {
            cout << _count + 1 << endl;
            break;
        }else if(new_sum > mid)
        {
            cout << _count << endl;
            break;
        }
    }
    return 0;
}
