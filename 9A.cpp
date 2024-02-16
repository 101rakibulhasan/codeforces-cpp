#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b; cin >> a >> b;
    int m = 7 - max(a,b);
    if(m == 0) cout << "0/1" << endl;
    else if(m == 6) cout << "1/1" << endl;
    else if(m == 1) cout << "1/6" << endl;
    else if(m == 2) cout << "1/3" << endl;
    else if(m == 3) cout << "1/2" << endl;
    else if(m == 4) cout << "2/3" << endl;
    else if(m == 5) cout << "5/6" << endl;


    return 0;
}
