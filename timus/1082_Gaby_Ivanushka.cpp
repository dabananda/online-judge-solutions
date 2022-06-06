#include <cstdio>

const int N = 3;

int A[N];

int Q(int l, int r)
{
    if (l >= r)
        return 0;

    int m;
    int c = 0;
    int x = A[l];
    int i = l - 1;
    int j = r + 1;
    while (true)
    {
        do
        {
            --j;
            ++c;
        }
        while (A[j] > x);

        do
        {
            ++i;
            ++c;
        }
        while (A[i] < x);

        if (i < j)
        {
            int t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
        else
        {
            m = j;
            break;
        }
    }

    return c + Q(l, m) + Q(m + 1, r);
}

int main()
{
    for (int i = 0; i < N; ++i)
        scanf("%d", &A[i]);

    if (Q(0, N - 1) == (N * N + 3 * N - 4) / 2)
        printf("Vasilisa the Beautiful\n");
    else
        printf("Koschei the Immortal\n");
    return 0;
}