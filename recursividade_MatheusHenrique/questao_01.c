#include<stdio.h>

int main(void){

    int potenciacao( int x, int y );
    int base, expoente, resultado;

    printf("\nDigite a base:");
    scanf("%i", &base);
    printf("\nDigite o expoente:");
    scanf("%i", &expoente);

    resultado = potenciacao( base, expoente );

    printf("\nA potencia eh: %i\n\n", resultado);
    
    system("pause");
    return 0;
    
}

int potenciacao( int x, int y ){

    int resultado;

    if( y==0 ){
        resultado = 1;
    }

    else{
        resultado = x * potenciacao( x , y - 1 );
    }

    return resultado;

}