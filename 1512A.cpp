#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int prev;
        cin >> prev;
        int diff = 0;
        for(int i = 2; i <= n; i++)
        {
            int x; cin >> x;
            if(x != prev )
            {
                if(i < n){
                    int l; cin >> l;
                    if(l == x)
                    {
                        diff = i - 1;
                    }else
                    {
                        diff = i;
                    }
                    i++;
                    prev = l;
                }else if(i == n)
                {
                    diff = i;
                }

            }else{
                prev = x;
            }

        }

        cout << diff << endl;
    }
    return 0;
}
