#include <stdio.h>

int find_max(int *arr, int n);
int avg(int *arr, int n);
int positive_num(int *arr, int n);

int main(void)
{
    int arr[] = {3, 5, 6, 7, 9};
    int len = (int)(sizeof(arr) / sizeof(arr[0])); 

    printf("max = %d\n", find_max(arr, len));
    printf("avg = %d\n", avg(arr, len));
    printf("positive num = %d\n", positive_num(arr, len));

    return 0;
}


int find_max(int *arr, int n)
{
    int max, i;
    max = arr[0];

    for (i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int avg(int *arr, int n) 
{
    int sum, i;

    sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum / n;
}

int positive_num(int *arr, int n)
{
    int i, num;
    num = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            num++;
        }
    }
    
    return num;
}
