#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1001];
    int x = 1;
    for(int i = 1; i <= 1000; i++)
    {
        string num = to_string(x);
        while(x % 3 == 0 || num[num.size()-1] == '3')
        {
            x++;
            num = to_string(x);
        }
        arr[i] = x;
        x++;
    }

    int t; cin >> t;
    while(t--)
    {
        int x ; cin >> x;
        cout << arr[x] << endl;
    }
    return 0;
}
