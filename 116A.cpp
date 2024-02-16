#include<iostream>

using namespace std;

int main()
{
    int n,_set,_min =0;
    cin >> n;
    int x,y;
    cin >> x >> y;
    _min = y;
    _set = _min;
    n--;
    while(n--)
    {
        //cout << _min << endl;
        if(_min > _set)
        {
          _set = _min;
        }
        cin >> x>>y;
        _min -= x;
        _min += y;
    }

    cout << _set;
    return 0;
}
