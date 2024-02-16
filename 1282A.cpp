#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c,r; cin >> a >> b >> c >> r;
        if(a>b) swap(a,b);
        
        int total_distance = b - a;

        int range_high = c+r;
        int range_low = c-r;

        if(range_low >= a && range_high <= b)
        {
            cout << total_distance - (range_high - range_low) << endl;
        }else if(range_high  < a || range_low > b)
        {
            cout << total_distance << endl;
        }else if(range_low  < a && range_high >= a)
        {
            int x = total_distance - (range_high - a);
            if(x <= 0) x = 0;
            cout << x << endl;
        }else if(range_low  <= b && range_high > b)
        {
            int x = total_distance - (b - range_low);
            if(x <= 0) x = 0;
            cout << x << endl;
        }
       
    }
    return 0;
}
