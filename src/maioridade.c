#include <stdio.h>

int main(){
    int numero;
    printf("Digite um número e tecle Enter\n");
    scanf("%d",&numero);
    if(numero > 17){
        printf("Você está autorizado a entrar\n");
    }
    else{
        printf("Você não está autorizado\n");
    }
    return 0;
}                   