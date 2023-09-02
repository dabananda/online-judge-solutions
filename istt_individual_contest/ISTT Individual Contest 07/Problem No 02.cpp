#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        long long int x = array[i];
        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0)
            {
                count++;
            }
        }
        if (count == 3)
        {
            cout << "Case " << i + 1 << ": " << "YES\n";
        }
        else
        {
            cout << "Case " << i + 1  << ": " << "NO\n";
        }
    }

    return 0;
}
