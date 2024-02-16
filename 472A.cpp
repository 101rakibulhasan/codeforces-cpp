#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    long long int x = 2;
    long long int y;
    int y_found = 0;
    while(x+=2)
    {
        if(n % 2 == 0)
        {
            for(long long int i = 2; i <= n-x; i+=2)
            {
                if(i + x == n)
                {
                    y = i;
                    y_found = 1;
                    break;
                }
            }
        }else{
            for(long long int i = 9; i <= n-x; i+=2)
            {
                if(i + x == n)
                {
                    y = i;
                    int flag = 0;
                    for(long long int i = 3; i*i <= n; i+=2)
                    {
                        if(y % i == 0) flag = 1;
                    }

                    if(flag == 0) continue;
                    y_found = 1;
                    break;
                }
            }
        }

        if(y_found == 1) break;
    }

    cout << x << " " << y << endl;

    return 0;
}
