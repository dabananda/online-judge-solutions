#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string line;
    cin >> line;
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    char array[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    if (n < 26)
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (array[i] == line[j])
                {
                    count++;
                    break;
                }
            }
        }
        if (count >= 26)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
