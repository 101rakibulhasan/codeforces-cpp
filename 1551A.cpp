#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int flag = 1;
        long long int n; cin >> n;
        long long int x = 1,y = 1000000000;
        if(n == 1)
        {
            x = 1;
            y= 0;
        }else
        {
            while(flag++)
            {
                int b = (n/(flag)); //
                int a = n - b*2;

                a += n - (a + 2*b);

                cout << a << " " << b << endl;

                if(n - (a + 2*b) != 0)
                {
                    break;
                }
                else
                {
                    if(abs(b - a) < abs(x-y))
                    {
                        x = a;
                        y = b;
                    }else break;
                }
            }
        }
        cout << x << " " << y << endl;
    }
}
