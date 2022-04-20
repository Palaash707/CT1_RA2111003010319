#include <stdio.h>

int main() {
    int amount_given,bill_amount;
    int q,r;
    printf("The bill amount is: ");
    scanf("%d",&bill_amount);
    printf("The amount given is: ");
    scanf("%d",&amount_given);
    q=amount_given/bill_amount;
    r=amount_given%bill_amount;
    printf("the quotient is: %d\n",q);
    printf("the remainder is: %d",r);

    return 0;
}
