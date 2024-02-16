#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int c;
        string encode;
        string decode;
        cin >> c >> encode;

        for(int i = c-1; i >= 0; i--)
        {
            if(encode[i] != '0')
            {
                char r = encode[i] - '0' + 'a' - 1;
                decode.push_back(r);
            }else{
                int sec_digit = encode[i-1] - '0';
                int first_digit = encode[i-2] - '0';
                int full_num = first_digit * 10 + sec_digit;
                char r = full_num + 'a' - 1;
                decode.push_back(r);
                i = i - 2;
            }
        }
        for(int i = decode.size() - 1; i >=0; i--)
        {
            cout << decode[i];
        }
        printf("\n");

    }

    return 0;
}
