#include <stdio.h>


void main ( ) {
char nome[] = "Marco";
int p;

printf("\n Tamanho da string %i",strlen(nome));
printf("\n Tamanho do vetor com sizeof  %i",sizeof(nome));
printf("\nsizeof(p): %i",sizeof(p));


if (nome[5]=='\0')
    printf("\nverdadeiro");
else
    printf("falso");

printf ("\n Nome = %s", nome);
printf("\nEndereco de nome =%p",nome);
printf("\nEndereco de nome[0]=%p",&nome[0]);
printf("\nEndereco de nome[1]=%p",&nome[1]);
printf("\nEndereco de nome[2]=%p",&nome[2]);
*(nome) = 'B';
*(nome + 4) = 'a';
printf ("\n Nome = %s" , nome);

}//Fim main
