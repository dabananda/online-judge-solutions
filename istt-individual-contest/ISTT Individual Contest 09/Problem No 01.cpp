#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        printf("%0.0lf\n", x / (1 + (y / 100)));
    }

    return 0;
}
