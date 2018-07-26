#include <stdio.h>

int main()
{
    int total;
    int element_num;
    int *element_ptr;
    int target_num;
    int i, j;

    scanf("%d",&total);
    for (i = 0; i < total; i++)
    {
        scanf("%d", &element_num);
        element_ptr = malloc(element_num * sizeof(int));
        for (j = 0; j < element_num; j++)
        {
            scanf("%d", &element_ptr[j]);
        }
        scanf("%d", &target_num);
        for (j = 0; j < element_num; j++)
        {
            if (element_ptr[j] > target_num)
                break;
        }
        free(element_ptr);
        printf("%d\n", j);
    }
    return 0;
}
