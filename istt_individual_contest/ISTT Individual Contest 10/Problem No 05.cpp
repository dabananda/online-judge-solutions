#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        long long int numbers[a];
        for (int i = 1; i <= a; i = i + 2)
        {
            numbers[i - 1] = i;
        }
        for (int i = 1; i <= a; i = i + 2)
        {
            numbers[(a/2) + 1] = i;
        }
        cout << numbers[b] << "\n";
    }


    return 0;
}
