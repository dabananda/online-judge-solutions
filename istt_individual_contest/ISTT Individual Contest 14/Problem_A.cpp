#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        long long int n, len, i, count = 0;
        string s, d1 = "ESWN", d2 = "ENWS";
        cin >> n >> s;
        len = s.length();
        for (i = 0; i < len; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if (count < 0)
        {
            cout << d2[abs(count) % 4] << endl;
        }
        else
        {
            cout << d1[count % 4] << endl;
        }
    }

    return 0;
}