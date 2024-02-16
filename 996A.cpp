#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int _count = 0;

    if(x / 100 != 0 && x != 0)
    {
        _count += x /100;
        x = x % 100;
        //cout << x << endl;
    }
    if(x / 20 != 0 && x != 0)
    {
        _count += x /20;
        x = x % 20;
        //cout << x << endl;
    }
    if(x / 10 != 0 && x != 0)
    {
        _count += x /10;
        x = x % 10;
        //cout << x << endl;
    }
    if(x / 5 != 0 && x != 0)
    {
        _count += x /5;
        x = x % 5;
        //cout << x << endl;
    }
    if(x / 1 != 0 && x != 0)
    {
        _count += x;
        //cout << x << endl;
    }

    cout << _count;

    return 0;
}
