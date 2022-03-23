#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > 10)
        {
            cout << x - 10 << " " << x - (x - 10) << endl;
        }
        else
        {
            cout << 0 << " " << x << endl;
        }
    }

    return 0;
}

