#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x != y && x != z && y != z)
    {
        cout << "3\n";
    }
    else if (x == y && x == z && y == z)
    {
        cout << "1\n";
    }
    else if (x == y || x == z || y == z)
    {
        cout << "2\n";
    }

    return 0;
}

