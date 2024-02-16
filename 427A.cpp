#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,prev,sum = 0,_count = 0;
    cin >> n;
    int x;
    while(n--)
    {
        cin >> x;
        if(x > 0)
        {
            sum += x;
        }

        if(x < 0 && sum <= 0)
        {
            _count++;
        }

        if(sum > 0 && x < 0)
        {
            sum += x;
        }

    }

    cout << _count;
    return 0;
}
