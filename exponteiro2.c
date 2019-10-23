#include <stdio.h>
void main() {
int *p;
int soma;
soma=50;
p=&soma; //p recebe o endereco da variavel soma
printf("\n valor de soma=%i",soma);
printf("\n endereco da variavel soma: &soma=%p",&soma);
printf("\n p contem o endereco da variavel soma p=%p",p);
getch();
*p = *p + 1; //incrementa o conteudo do endereco da variavel soma
printf("\n\n ----> Apos *p = *p + 1; <----");
printf("\n valor de soma=%i",soma);
printf("\n conteudo de p=%p",p);
getch();
p++; //incrementa p
printf("\n\n ----> Apos p++; <----");
printf("\n valor de soma=%i",soma);
printf("\n Conteudo de p=%p",p);
getch();
p--; //Decrementa p
printf("\n\n ----> Apos p--; <----");
printf("\n valor de soma=%i",soma);
printf("\n Conteudo de p=%p",p);
getch();
}//Fim main
