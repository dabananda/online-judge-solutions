#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        if (x % 2 == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }

    return 0;
}
