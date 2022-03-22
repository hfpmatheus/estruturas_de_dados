#include<stdio.h>

int main(void){

    int fibonacci( int x );
    int contador, numero=10;

    for( contador = 1; contador<=numero; contador++ ){
        printf( "\n%d", fibonacci(contador) );
    }
    
    printf("\n");
    
    system("pause");
    return 0;
    
}

int fibonacci( int numero ){

    int x;

    if( numero ==1 || numero == 2 ){
        x = 1;
   
    }

    else{
        x = fibonacci( numero - 1 ) + fibonacci( numero - 2 );
    }

    return x;

}