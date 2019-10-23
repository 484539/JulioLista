#include <stdio.h>

int main(){

int i=3,j=5;
int *p, *q;
p = &i;
q = &j;

if (p == &i)
    printf("\nVerdadeiro");
else
    printf("\nFalse");

    printf("\n *p - *q = %i",*p - *q);
    printf("\nc) **&p = %i", **&p);
    printf("\nd) 3* - *p/(*q)+7 = %i", 3* - *p/(*q)+7);

}
