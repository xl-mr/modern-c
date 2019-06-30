#include <stdio.h>

typedef void Fcn(int);
typedef void (*arg_fcn_ptr)(int);
typedef Fcn *Fcn_ptr(int, arg_fcn_ptr f);

void arg_f(int n) {
    printf("%d\n", n);
}

int main(void)
{
    arg_fcn_ptr arg_f_p;
    arg_f_p = arg_f;

    arg_f_p(10);

    return 0;
}

