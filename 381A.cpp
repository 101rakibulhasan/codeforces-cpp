#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int l=0,h=n-1, a=0, b= 0;
    int flag = 0;
    while(l<=h)
    {
        int high = 0;
        if(arr[l] < arr[h])
        {
            high = arr[h];
            h--;
        }
        else
        {
            high = arr[l];
            l++;
        }

        if(flag == 0)
        {
            a += high;
            flag = 1;
        }else
        {
            b += high;
            flag = 0;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
