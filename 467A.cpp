#include<iostream>

using namespace std;

int main()
{

    int n,_count=0;
    cin >> n;

    while(n--)
    {
        int p,q;
        cin>> p >> q;
        if(p<=q-2) _count++;
    }

    cout << _count <<endl;
}
