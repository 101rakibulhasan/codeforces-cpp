#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long int x,y,n; cin >> x >> y >> n;
        long long int m = (n%x);
        if(m > y)
        {
            n -= (m - y);
            cout << n << endl;
        }
        else if(m < y){
            long long int d = (n/x);
            long long int v = d*x - x + y;
            if(v < 0) v = 0;
            cout << v << endl;
        }else{
            cout << n << endl;
        }

    }
    return 0;
}
