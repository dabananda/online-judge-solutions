#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0, odd = 0;
        cin >> n;
        long long int numbers[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            if (numbers[i] % 2 == 0)
            {
                count++;
            }
            else
            {
                odd++;
            }
        }
        if (odd == 0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}