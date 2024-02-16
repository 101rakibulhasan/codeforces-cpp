#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x,y,_count=1;
    cin >> y;
    n--;
    x = y;
    while(n--)
    {
        cin >> y;
        if(y != x)
        {
            _count++;
            x = y;
        }
    }

    cout << _count;
    return 0;
}
