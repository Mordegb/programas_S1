#include <stdio.h>
int main()
{
int qn;
printf("diga a quantidade de numeros: \n");
 scanf("%d", &qn);
int N[qn];
for(int i = 0; i < qn; i++)
{
    printf("diga o N%d: " , i + 1);
    scanf("%d", &N[i]);
}
int maior = N[1];
int menor = N[1];
    for(int i = 0; i < qn; i++ ){
        if(N[i] > maior){
            maior = N[i];
        }
    }
    for(int i = 0; i < qn; i++ ){
        if(N[i] < menor){
            menor = N[i];
        }
    }

    printf("maior numero:%d \n" , maior);
    printf("menor numero:%d \n" , menor);





    return 0;
}