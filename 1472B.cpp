#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a = 0;
        int b = 0;
        int p = n;
        while(p--)
        {
            int v; cin >> v;
            if(v == 1) a++;
            else b++;
        }

        //cout << a << "asd" << b << endl;

        if((a + b * 2) % 2 == 0 )
        {
            if(n%2==0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;

//        if(a == 0)
//        {
//            if(b % 2 == 0) cout << "YES1" << endl;
//            else cout << "NO1" << endl;
//        }else if(b == 0)
//        {
//            if(a % 2 == 0) cout << "YES2" << endl;
//            else cout << "NO2" << endl;
//        }else if(a == b)
//        {
//
//        }
//        else
//        {
//            if(a > b)
//            {
//                if((a % b) % 2 == 0 ) cout << "YES3" << endl;
//                else cout << "NO3" << endl;
//            }else
//            {
//                if((b % a) % 2 == 0 ) cout << "YES4" << endl;
//                else cout << "NO4" << endl;
//            }
//        }
    }
    return 0;
}
