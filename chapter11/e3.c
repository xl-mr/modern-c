#include <stdio.h>

void avg_sum(double *arr, int n, double *avg, double *sum);

int main(void)
{
    double avg, sum;
    double arr[] = {1,2,3,4,5,6,7,8,9};

    avg_sum(arr, 10, &avg, &sum);

    printf("avg = %lf, sum = %lf\n", avg, sum);

    return 0;
}

void avg_sum(double *arr, int n, double *avg, double *sum)
{
    int i;
    
    *sum = 0.00;
    for (i = 0; i < n; i++) {
        *sum += arr[i];
    }

    *avg = *sum / n;
}

