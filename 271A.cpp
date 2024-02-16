#include<iostream>

using namespace std;

int main()
{
    int a,b,c,d,x, n;cin >> n;
    while(n)
    {
        n++;
        x = n;
        a = x / 1000;
        x = x % 1000;
        b = x / 100;
        x = x % 100;
        c = x / 10;
        x = x % 10;
        d = x / 1;
        x = x % 1;

        //cout << a << " " << b << " " << c << " " << d << "\n";

        if(a != b && a != c && a != d && b != c && b!= d && c != d)
        {
            break;
        }
    }
    cout << n;
    return 0;
}
