#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin >> s;

   int seven = 0;

       for(int i = 0; i < s.size(); i++)
       {
            if(s[i] == '7' || s[i] == '4')
            {
                seven++;
            }
       }

       if(seven == 7 || seven == 4)
       {
           cout << "YES\n";
       }else
       {
           cout << "NO\n";
       }

}
