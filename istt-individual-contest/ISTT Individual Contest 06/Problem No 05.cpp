#include <iostream>
using namespace std;

int main()
{
    float balance[12], sum = 0.0;
    for (int i = 0; i < 12; i++)
    {
        cin >> balance[i];
    }
    for (int j = 0; j < 12; j++)
    {
        sum = sum + balance[j];
    }
    printf("$%0.2f", sum / 12);

    return 0;
}
