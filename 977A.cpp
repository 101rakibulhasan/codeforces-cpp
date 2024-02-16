#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j;
    cin >> i >> j;

    while(j > 0)
    {
        if(i % 10 != 0)
        {
            i = i - 1;
        }else
        {
            i = i / 10;
        }

        j--;
    }

    cout << i <<endl;
    return 0;
}
