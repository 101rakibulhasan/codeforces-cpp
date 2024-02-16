#include<iostream>

using namespace std;

int main()
{
    int n,h,_count=0;
    cin >> n >> h;
    for(int i = 0 ; i < n; ++i)
    {
        int x;
        cin >> x;
        (x <= h) ?  _count++ : _count = _count + 2;
    }

    cout << _count <<endl;
    return 0;
}
