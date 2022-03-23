#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = 1; ; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}
