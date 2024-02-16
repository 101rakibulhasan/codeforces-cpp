#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    int mis=0, chr=0;
    while(t--)
    {
        int a,b; cin >> a >> b;
        if(a > b) mis++;
        else if(a < b) chr++;
    }

    if(mis > chr) cout << "Mishka" << endl;
    else if(mis == chr) cout << "Friendship is magic!^^" << endl;
    else cout << "Chris" << endl;
    return 0;
}
