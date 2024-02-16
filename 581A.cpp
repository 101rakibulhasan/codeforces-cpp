#include<iostream>

using namespace std;

int main()
{
    int x,y, _diff=0;;
    cin >> x >> y;

    if(x <= y )
    {
        cout << x << " ";
        y -= x ;
        x = 0;
    }else{
        cout << y << " ";
        x -= y ;
        y = 0;
    }

    //cout << x << y;

    int _same=0;

    if(x > 0)
    {
        _same += (x / 2);
    }

    if(y > 0)
    {
        _same += (y / 2);
    }

    cout << _same << endl;
    return 0;
}
