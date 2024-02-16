#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a; cin >> a;
        if((a/2) % 2 == 1)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" << endl;
            long long int arr[a];

            int x = 2;
            int sum_even = 0;
            for(int i = 0; i < a/2; i++)
            {
                arr[i] = x;
                sum_even += x;
                x+=2;
            }

            x = 1;
            int sum_odd = 0;
            for(int i = a/2; i < a; i++)
            {
                if(i == a-1)
                {
                    arr[i] = (sum_even - sum_odd);
                }else{
                    arr[i] = x;
                    sum_odd += x;
                    x+=2;
                }
            }

            for(int i=0; i < a; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
