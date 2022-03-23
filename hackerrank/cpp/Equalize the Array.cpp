#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    int count = 1, max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << n - max << endl;

    return 0;
}
