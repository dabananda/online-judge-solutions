#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
        {
            y = y + 1;
        }
        else if (s[i] == 'D')
        {
            y = y - 1;
        }
        else if (s[i] == 'L')
        {
            x = x - 1;
        }
        else if (s[i] == 'R')
        {
            x = x + 1;
        }
    }
    cout << x << " " << y << "\n";

    return 0;
}
