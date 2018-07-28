#include <stdio.h>

int main()
{
    int T, N, K;
    int element;
    int i, j;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &N, &K);
        for (j = 0; j < N; j++)
        {
            scanf("%d", &element);
            if (element == K)
                break;
        }
        if (j == N)
            printf("-1\n");
        else
            printf("%d\n", j+1);
    }
    return 0;
}
