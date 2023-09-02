#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, a = 0, b = 0, c = 0, d = 0, e = 0;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            a++;
        }
        else if (s[i] == 'b')
        {
            b++;
        }
        else if (s[i] == 'c')
        {
            c++;
        }
        else if (s[i] == 'd')
        {
            d++;
        }
        else if (s[i] == 'e')
        {
            e++;
        }
    }
    int array[5] = {a, b, c, d, e};
    int max = array[0], min = array[0];
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << min << " " << max << "\n";

    return 0;
}
