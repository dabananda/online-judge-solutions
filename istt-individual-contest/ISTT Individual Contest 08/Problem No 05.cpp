#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int array[4], count = 0;
    for (long long & i : array)
    {
        cin >> i;
    }
    int n = sizeof(array) / sizeof(array[0]);
    sort(array, array + n);
    for (int i = 0; i < 4; i++)
    {
        if (array[i] == array[i + 1])
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
