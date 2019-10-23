#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct no {
struct no *prox;
int val;
};
int main() {
struct no *p, *q;
p = new no;
q = new no;
if ((p==NULL) || (q==NULL)) {
printf("\nErro de Alocacao Memoria!\n");
exit(0);
}
p->val = 10;
p->prox = q;
q->val = 20;
q->prox = NULL;
printf("%d %d %d", p->val, q->val, p->prox->val);

delete(p);
delete(q);

return 0;
}//Fim main
