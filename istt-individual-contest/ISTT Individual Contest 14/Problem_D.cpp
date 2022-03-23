#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x, y, res;
    cin >> a >> b >> c;
    res = b * b - 4 * a * c;
    if (res == 0)
    {
        x = - b / (2 * a);
        cout << "One root: " << x << endl;
    }
    else if (res > 0)
    {
        x = (- b + sqrt(res)) / (2 * a);
        y = (- b - sqrt(res)) / (2 * a);
        if (x > y)
        {
            swap(x, y);
        }
        cout << "Two roots: " << x << " " << y << endl;
    }
    else if (res < 0)
    {
        cout << "No roots\n";
    }

    return 0;
}