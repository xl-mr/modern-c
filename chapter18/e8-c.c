#include <stdio.h>
#include <stdlib.h>

typedef float *out_fcn(int);
typedef out_fcn *in_fcn(void);

float *f2(int n) {
    float b = n * 10, *a = &b;
    return a;
}

float *(*f1(void))(int n) {
    return f2;
}

int main(void) 
{
    //float *f;
    //f = f1()(10);

    //printf("%f\n", *f);
    
    return 0;
}
