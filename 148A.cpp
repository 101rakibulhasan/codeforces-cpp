#include<iostream>

using namespace std;

int main()
{
    int k,l,m,n,d;
    int a = 0;
    cin >> k >> l >> m >> n >> d;
    int x=1,_count = 0;
    for(int i = 1; i <= d;i++)
    {
        if(x > n)
        {
            x = 1;
        }

        if(x == k || x == l || x == m || x == n)
        {
            _count++;
            //cout << i <<endl;

        }

        x++;
    }

    cout << _count;
    return 0;
}
