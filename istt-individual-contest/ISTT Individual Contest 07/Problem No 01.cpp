#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double r;
        cin >> r;
        double result = ((2 * r) * (2 * r)) - (2 * acos(0.0) * r * r);
        printf("Case 0%d: %0.2lf\n", i + 1, result);
    }

    return 0;
}
