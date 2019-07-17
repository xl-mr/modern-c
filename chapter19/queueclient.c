#include <stdio.h>
#include "queueADT.h"

int main(void)
{
    queue q;
    q = create();

    destroy(q);

    return 0;
}
