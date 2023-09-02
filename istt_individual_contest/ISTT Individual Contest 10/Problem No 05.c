#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int numbers[a];
    int count = 0;
    for (int i = 1; i <= a; i = i + 2)
    {
        numbers[count] = i;
        count++;
    }
    for (int i = 2; i <= a; i = i + 2)
    {
        numbers[count] = i;
        count++;
    }
    printf("%d\n", numbers[b - 1]);

    return 0;
}

