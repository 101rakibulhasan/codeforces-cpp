#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c,d; cin >> a >> b >> c >> d;
        int _count = 0;
        if(b > a) _count++;
        if(c > a) _count++;
        if(d > a) _count++;

        cout << _count << endl;
    }
    return 0;
}
