#include <stdio.h>

int main()
{
    int cmd;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Comands: 0 = clear, 1 = credit, 2 = debit, ");
    printf("3 = balance, 4 = exit\n\n");

    for (;;)
    {
        printf("Enter comand: ");
        scanf("%d", &cmd);

        switch(cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance += debit;
                break;
            case 3:
                printf("Current balance : $%.2f\n", balance);
                break;
            case 4:
                goto jump;
                break;
            default:
                printf("Comands: 0 = clear, 1 = credit, 2 = debit, ");
                printf("3 = balance, 4 = exit\n\n");
                break;
        }
    }
jump:
    return 0;
}
