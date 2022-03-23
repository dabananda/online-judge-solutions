#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, sum = 0, sum_minus = 0;
        cin >> x;
        int array[x];
        for (int j = 0; j < x; j++)
        {
            cin >> array[j];
        }
        for (int j = 0; j < x; j++)
        {
            if (array[j] < 0)
            {
                continue;
            }
            else
            {
                sum = sum + array[j];
            }
        }
        cout << "Case " << i + 1 << ": " << sum << "\n";
    }

    return 0;
}
