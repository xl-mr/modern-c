#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(void)
{
    char grade[] = "ABCDF";
    int len = (int)(sizeof(grade) / sizeof(grade[0]));

    printf("avg = %.2f\n", compute_GPA(grade, len));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    int sum, i, sw;

    sum = 0;
    for (i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A':
                sw = 4;
                break;
            case 'B':
                sw = 3;
                break;
            case 'C':
                sw = 2;
                break;
            case 'D':
                sw = 1;
                break;
            case 'F':
                sw = 0;
                break;
            default:
                sw = 0;
                break;
        }
        sum += sw;
    }

    return (float)sum / n;
}
