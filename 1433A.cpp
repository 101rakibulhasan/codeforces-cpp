#include <iostream>
using namespace std;

int main()
{
    int arr[10000] = {0};
    int a=1,b=2,c=3,d=4;
    arr[1] = a;
    arr[11] = arr[1]+b;
    arr[111] = arr[11] + c;
    arr[1111] = arr[111] + d;

    for(int i = 2; i < 10; i++)
    {
        arr[i] += a + arr[(i-1) * 1111];
        arr[i*11] += b + arr[i];
        arr[i*111] += c + arr[i * 11];
        arr[i*1111] += d + arr[i * 111];
    }
    int t; cin >> t;
    while(t--)
    {
        int x; cin >> x;
        cout << arr[x] << endl;
    }
    return 0;
}
