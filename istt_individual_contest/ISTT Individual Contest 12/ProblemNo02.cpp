#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    string line;
    while (getline(cin,line))
    {
        int len = line.length();
        for (int i = 0; i < len; i++)
        {
            if (isalpha(line[i]) && !isalpha(line[i + 1]))
            {
                count++;
            }
        }
        cout << count << "\n";
        count = 0;
    }

    return 0;
}
