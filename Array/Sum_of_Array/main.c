#include <stdio.h>

int main()
{
    int T;
    int i, j, arr_size, element, sum;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &arr_size);
        sum = 0;
        for (j = 0; j < arr_size; j++)
        {
            scanf("%d", &element);
            sum += element;
        }
        printf("%d\n", sum);
    }
    return 0;
}
