#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    long long int n,k; cin >> n >> k;
    long long int output = 0;
    long long int last_odd ;
    long long int first_odd;
    long long int last_odd_ind;
    long long int first_odd_ind;
    long long int first_even;
    long long int last_even;
    long long int last_even_ind;
    long long int first_even_ind;

    if(n % 2 == 0)
    {
        last_odd = n -1; // 9
        first_odd = 1; // 1
        last_odd_ind = (n/2); // 5
        first_odd_ind = 1; // 1

        first_even = 2;
        last_even = n;
        first_even_ind = (n/2) +1;
        last_even_ind = n;
    }else // 1 3 5 7 9 11 2 4 6 8 10
    {
        last_odd = n;
        first_odd = 1;
        last_odd_ind = (n/2)+1;
        first_odd_ind = 1;

        first_even = 2;
        last_even = n-1;
        first_even_ind = (n/2) +2;
        last_even_ind = n;
    }

    if(k <= last_odd_ind)
    {
        if(k <= ((first_odd_ind + last_odd_ind) / 2)) // 4 < 3
        {
            output = 1;
            for(long long int i = 1; i < k; i++)
            {
                output+=2;
                //cout << output << endl;
            }
        }else // 4> 3
        {
            k = last_odd_ind - k;
            output = last_odd;
            for(long long int i = k; i>0; i--)
            {
                output-=2;
            }
        } 
        
    }else
    {
        if(k <= ((first_even_ind + last_even_ind) / 2)) // 4 < 3
        {
            k-= last_odd_ind;
            output = 2;
            for(long long int i = 1; i < k; i++)
            {
                output+=2;
                //cout << output << endl;
            }
        }else
        {
            k= n - k; //10-9
            output = last_even;
            for(long long int i = k; i > 0; i--)
            {
                output-=2;
                //cout << output << endl;
            }
        }
    }

    cout << output  << endl;

    return 0;
}   