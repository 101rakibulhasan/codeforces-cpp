#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b[n];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);

        int i = n-1;
        int j = i;

        int _count = 0;

        if(a[i] > b[i])
        {
            while(k--)
            {
                while(a[i] == a[i-1]) i--;
                //while(b[j] == b[j-1]) j--;
                i--;
                swap(a[i-1],b[j]);
                if(b[j] < a[i]) j--;
                i--;
            }
            for(int q=0; q <n;q++) _count += a[q];
        }else
        {
            while(k--)
            {
                while(b[i] == b[i-1]) i--;
                //while(a[j] == a[j-1]) j--;
                //1124
                //4425
                i--;
                swap(b[i],a[j]);
                if(a[j] < b[i])
                {
                    j--;
                    i--;
                }
            }
            for(int q=0; q <n;q++) _count += b[q];
        }

        cout << "OUTPUT: " << endl;

        for(int i = 0; i< n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        for(int i = 0; i< n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;

        cout << _count << endl;

    }
    return 0;
}
