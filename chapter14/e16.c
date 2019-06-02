#include <stdio.h>

#define IDENT(x) PRAGMA(ident #x)

#define PRAGMA(x) _Pragma(#x)

int main(void)
{
    IDENT(10);

    return 0;
}


