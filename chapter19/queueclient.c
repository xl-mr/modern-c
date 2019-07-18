#include <stdio.h>
#include "queueADT.h"

int main(void)
{
    int i;
    queue q;
    q = create();

    for (i = 0; i < 10; i++) {
        push(q, i);
    }

    pop(q);
    pop(q);
    pop(q);

    print_q(q);

    destroy(q);

    return 0;
}
