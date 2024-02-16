#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    int arr[n],_sort[n];

    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
        _sort[i] = arr[i];
    }

    sort(_sort,_sort+n);

    int small = _sort[0];
    int big = _sort[n-1];

    int small_ind = 0;
    int big_ind = n;

    for(int i=0; i<n;i++)
    {
        if(arr[i] == small && i > small_ind)
        {
            small_ind = i;
        }

        if(arr[i] == big && i < big_ind)
        {
            big_ind = i;
        }
    }

    //cout << big_ind << small_ind;

    if(big_ind < small_ind)
    {
        sum +=  big_ind + n - 1 - small_ind;
    }else
        sum +=  big_ind + n - 2 - small_ind;



    cout << sum;

    return 0;
}
