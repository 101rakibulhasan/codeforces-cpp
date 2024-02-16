#include <iostream>
using namespace std;

int main()
{
    long long t; cin>> t;
    while(t--)
    {
        long long a,b;
        cin >> a >> b;
        long long sum = a + b;

        for(long long i = 1; i < 1000000; i++)
        {
            long long mul = 2*(i-1)*a + 2*i*b;
            if((mul - a)%sum == 0 && (mul-b)%sum == 0 && mul - a < 0 && mul -b < 0)
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}
