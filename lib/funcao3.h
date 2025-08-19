#include <stdio.h>

void cabecalho(){
    printf("================================================");
    printf("=                                              =");
    printf("=                                              =");
    printf("================= Programa em C=======================");
    printf("\n\n");
}
int potencia(int base, int expoente){
    int rs = base;
    int i;
    for(i = 1 ; i < expoente ; i++){
        rs *= base;
    }
    return rs;    
}
float jurosSimples(float preco, float taxa){
    return preco * (taxa / 100);
}    

void separador(){
    int i;
    for(i =1 ; i <= 50 ; i++){
        printf("#");
    }
    printf("\n");
}        