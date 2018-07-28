#include <stdio.h>

int main()
{
    int T, i, N, result;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        result = (1+N)*N/2;
        printf("%d\n", result);
    }
    return 0;
}
