#include <iostream>
using namespace std;

int main()
{
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
    }
    int max = x[0];
    for (int i = 0; i < 4; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }
    int y[3], count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (x[i] == max)
        {
            continue;
        }
        else
        {
            y[count] = max - x[i];
            count++;
        }
    }
    cout << y[0] << " " <<  y[1] << " " << y[2] << "\n";

    return 0;
}
