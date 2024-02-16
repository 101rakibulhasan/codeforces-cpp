#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,y; cin >> x >> y;
        int a,b;
        if(x < y)
        {
            a = x; b = y;

        }else{
            a = y; b = x;
        }
        if(b <= a+a)
        {
            cout << (a+a) * (a+a) << endl;
        }
        else{
            cout << (b) * (b) << endl;
        }
    }
    return 0;
}
