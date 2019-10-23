#include <stdio.h>
#include <string.h>

struct pessoa{

    char nome[20];
    int idade;
}moca;

int main(){

    struct pessoa moca;
    struct pessoa *pt; // ponteiro para estrutura do tipo pessoa

    strcpy(moca.nome,"Ana Carolina");
    moca.idade = 26;

    pt = &moca;

    printf("\nNome: %s", pt->nome);
    printf("\nIdade : %i",pt->idade);


}
