#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        n = n + 1;
    }
    else if (n % 4 != 0)
    {
        n = n - 1;
    }
    cout << n << "\n";

    return 0;
}
