#include <stdio.h>

int main()
{
    int i;
    int arr[4];
    int min, max;

    printf("Enter your integers: ");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", arr + i);
    }

    min = arr[0];
    max = arr[0];
    for (i = 0; i < 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
