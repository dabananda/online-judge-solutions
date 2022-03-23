#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        string X1 = "X++", X2 = "++X", X3 = "--X", X4 = "X--";
        string z;
        cin >> z;
        if (z == X1 || z == X2)
        {
            result++;
        }
        if (z == X3 || z == X4)
        {
            result--;
        }
    }
    cout << result << "\n";

    return 0;
}
