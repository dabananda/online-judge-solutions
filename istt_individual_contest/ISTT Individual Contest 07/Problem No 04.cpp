#include <iostream>
using namespace std;

long long int aVeryBigSum(long long int *numbers, int x)
{
    long long int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum = sum + numbers[i];
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    long long int result = aVeryBigSum(array, n);
    cout << result << endl;

    return 0;
}
