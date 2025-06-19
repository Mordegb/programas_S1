#include <stdio.h>
int main()
{
    int e , d;
        //inputs
    printf("diga a quantidade de dedos na mão direita do ogro:");
     scanf("%d" , &d);
    printf("diga aquantidade de dedos na mão esquerda do ogro:");
     scanf("%d" , &e);
    printf("\n");
        //restições
        if(e > 5 || d > 5 || e == d || e < 0 || d < 0){
            printf(" valores invalidos, tente novamente.");
            return 0;
        }
    
        //computaçoes
    if(e > d){
        printf("como tem  mais dedos na mão esquerda , deve ser computada a soma dos produtos.\n");
        printf("\n");
        int soma = e + d;
        printf("soma= %d\n", soma);
        return 0;
    }
    int diferent;
    if(d > e){
        printf("como tem  mais dedos na mão direita , deve ser computada o dobro da diferença entre 'e' e 'd' \n");
        diferent = d - e;
        diferent = diferent * 2;
        printf("resultado = %d\n" , diferent);
        return 0;

    }

}