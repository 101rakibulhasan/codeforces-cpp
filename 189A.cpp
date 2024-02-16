#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i] ;
    }

    for(int i = 0; i*arr[0] <= 3; i++)
    {
        for(int j = 0; j * arr[0] < 1; j++)
    {
        cin >> arr[i] ;
    }
    }

    if(n % arr[0] == 0)
    {
        cout << n/arr[0] << endl;
    }else if(n % arr[0] == arr[1]){
        cout << n/arr[0] + 1 << endl;
    }
}
