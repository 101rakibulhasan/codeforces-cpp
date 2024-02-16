#include <iostream>

using namespace std;

int main()
{
    string line;

    cin >> line;

    if(line.size() < 2)
    {
        cout << line << "\n";
    }
    else
    {
        for(int i=0;i < line.size()-2; i=i+2)
        {
            for(int j=i+2;j < line.size(); j=j+2)
            {
                if(line[j] < line[i])
                {
                    char temp;
                    temp = line[i];
                    line[i] = line[j];
                    line[j] = temp;
                }

            }

        }
        cout << line << "\n";
    }

    return 0;
}
