#include <stdio.h>
#include <stdlib.h>

struct no {
    int info;
    struct no *prox;
};


struct no * inserirNoInicio(struct no *L, int v){
//1 alocar espaço de memoria para o novo nó(malloc)
//2 colocar a informação no novo nó
//3 fazer o encadeamento do novo nó no inicio da lista ou seja , atribuir ao campo prox do novo nó o endereço do primeiro nó de lista
//4 fazer a lista apontar para o novo nó que passa a ser o 1 da lista.
struct no *p;

p = (struct no *) malloc(sizeof(struct no)); //aloca espaço de memoria para o novo nó usando castin

p->info = v; //coloca informação no novo nó
p->prox = L; // faz o encadeamento do novo no no inicio da lista
L =  p; //faz a lista apontar para o novo no , o qual passa a ser o primeiro

return L; //retorna o endereço do novo nó para atualizar a Lista no prog.principal
}//dim do inserirNoInicio()

struct no * inserirNoFim (struct no*L, int v){
    struct no *p, *n;
    // 1 alocar espaco de memoria
    //2 colocar a informação no novo no e colocar null no campo prox
    //3 localizar o ultimo no da lista
    //4 fazer o encadeamento do novo no no fim da lista
    n = (struct no *) malloc(sizeof(struct no)); // aloca memoria
    n->info = v; //coloca a informação do novo no
    n->prox = NULL; //como sera o ultimo no , coloca null no seu prox

    if(L == NULL){ // tratamento de lista vazia
        return n;
    }

    //localizar ultimo no da lista
    p=L; //aponta para o primeiro
    while(p->prox!=NULL)
        p = p->prox; //anda o p ate o ultimo no

        p->prox = n; //faz o encadeamento do ultimo no com o novo no

        return L;


}//Fim inserir no fim

struct no *removerDoInicio(struct no *L,int *v){
    struct no *p;

    p=L;// aponta p para o primeiro no o qual sera removido

    *v = p->info; //coloca em val (atravez de v) a informação do no removido

    L=p->prox; // aponta L para o segundo no o qual passara a ser o primeiro

    free(p); //libera espaaço de memoria usada pelo no removido

    return L;

};//fim do remover do inicio()

void imprimirLista (struct no *L){
    struct no *p;

    if (L==NULL){
        printf("Lista Vazia"); //Tratamento de caso
        return;
    }

    p = L;//aponta p para o primeiro no da lista

    while (p != NULL){
        printf("%i -> ",p->info);
        p = p->prox;

    }
}

int main(){
struct no *Lista;
int op, val;

Lista = NULL; //Cria a lista vazia

do{
    printf("\n*********************************************");
    printf("\n****** 1) Inserir no Inicio da lista ********");
    printf("\n****** 2) Imprimir a lista*******************");
    printf("\n****** 3) Inserir no fim da lista************");
    printf("\n****** 4) Remover do inicio da lista*********");
    printf("\n ****0) sair");
    printf("\n****                                     ****");
    printf("\n ***** opcao: ");

    fflush(stdin); scanf("%i",&op);

    switch(op){

    case 1 : //inserir valor no começo da lista
        printf("Digite o valor : ");
        fflush(stdin); scanf("%i",&val);
        Lista = inserirNoInicio (Lista,val);
        break;
    case 2 : //Imprimir a lista
        imprimirLista(Lista);
        break;
    case 3 :
        printf("Digite o valor : ");
        fflush(stdin); scanf("%i",&val);
        Lista = inserirNoFim (Lista,val);
        break;
    case 4 : //remover o no do inicio da lista , retornando a informação do no removido
        if (Lista == NULL){
            printf("\nLista vazia Impossivel Remover!");
        }else{
        Lista = removerDoInicio(Lista,&val);
        printf("\n Valor removido: %i",val);
        }
        break;
    }


}while (op != 0);

return 0;
}
