#include <iostream>

using namespace std;

int main()
{
    int n, i = 2, digits[3];
    cin >> n;
    while (n != 0)
    {
        int tmp = n % 10;
        digits[i] = tmp;
        n = n / 10;
        i--;
    }
    if (digits[0] == digits[2])
    {
        cout << "=\n";
    }
    else
    {
        if (digits[0] > digits[2])
        {
            cout << digits[0] << "\n";
        }
        else
        {
            cout << digits[2] << "\n";
        }
    }

    return 0;
}