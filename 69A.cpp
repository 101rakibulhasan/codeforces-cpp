#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    int sum = 0;
    int a,b,c;
    int x = 0,y = 0,z = 0;
    while(t--)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }

    //cout << x << y << z;

    if(x == 0 && y == 0 && z ==0)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
