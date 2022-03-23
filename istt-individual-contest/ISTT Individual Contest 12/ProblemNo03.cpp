#include <iostream>

using namespace std;

int main()
{
    int  n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x, y, s, d;
        cin >> s >> d;
        x = (s + d) / 2;
        y = s - x;
        if (s == x + y && d == x - abs(y))
        {
            cout << x << " " << y << "\n";
        }
        else
        {
            cout << "impossible\n";
        }
    }

    return 0;
}
