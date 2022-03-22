#include <stdio.h>
#include<stdlib.h>

int main(void){

    int MDC( int a, int b );

    int n1, n2;

    printf("\nEntre com o primeiro numero: ");
    scanf("%i", &n1);
    printf("\nEntre com o segundo numero: ");
    scanf("%i", &n2);

    printf("\nO MDC entre %i e %i eh %i\n\n", n1, n2, MDC( n1, n2 ) );

    system("pause");
    return 0;

}

int MDC(int a, int b){

    int resto;

    if( b == 0 ){
        return a;
    }
    
    else{
        resto = a%b;
        return MDC( b, resto );
    }

}