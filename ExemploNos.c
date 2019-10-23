#include <stdio.h>
#include <stdlib.h>
struct no {
struct no *prox;
int val;
};

void main() {

struct no *p, *q;

p = (struct no *) malloc(sizeof(struct no));
q = (struct no *) malloc(sizeof(struct no));
if ((p==NULL) || (q==NULL)) {
printf("\nErro de Alocacao Memoria!\n");
exit(0);
}

p->val = 10;
p->prox = q;
q->val = 20;
q->prox = NULL;
printf("%d %d %d", p->val, q->val, p->prox->val);
free(p);
free(q);

printf("\n apos free : p->val=%i e q->val%i",p->val,q->val);

}//Fim main
