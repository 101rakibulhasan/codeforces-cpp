#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
using ll = long long;

int main()
{
        // n == number of friends == 3
        // k == number of bottles == 4
        // l == ml of drinks == 5
        // c == number of limes == 10
        // d == number of slice of the lime == 8
        // p == grams of salt == 100
        // nl == 3
        // np == 1

        //1000/4 19 90/3
        //150    19 30

        ll n,k,l,c,d,p, nl , np, slice; cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
        ll act_drink = (k * l) / nl;  // 20
        ll act_slice = c * d; // 80
        ll act_salt = p / np; // 100

        int min_need = min(act_drink, min(act_slice, act_salt));
        cout << min_need/n << endl;



    return 0;
}
