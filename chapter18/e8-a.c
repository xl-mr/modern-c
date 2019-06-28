#include <stdio.h>

typedef char Fcn(int);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_arr[10];

char one(int c) {
    return 'a' + (char)c;
}



int main(void)
{
    Fcn_ptr_arr x;

    x[0] = one;

    printf("%c\n",x[0](1));

    return 0;
}
