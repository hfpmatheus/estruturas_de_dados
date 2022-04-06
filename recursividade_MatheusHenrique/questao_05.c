#include<stdio.h>

int main(void){

    int potenciacao( int a, int b, int expo );
    int base1, base2, expoente, resultado;

    printf("\nDigite a:");
    scanf("%i", &base1);
    printf("\nDigite b:");
    scanf("%i", &base2);
    printf("\nDigite o expoente:");
    scanf("%i", &expoente);

    resultado = potenciacao( base1, base2, expoente );

    printf("\nO resultado eh: %i\n\n", resultado);
    
    system("pause");
    return 0;
    
}

int potenciacao( int a, int b, int expo ){

    int resultado;

    if( expo==0 ){
        resultado = 1;
    }

    else{
        resultado = a * b * potenciacao( a , b, expo - 1 );
    }

    return resultado;

}