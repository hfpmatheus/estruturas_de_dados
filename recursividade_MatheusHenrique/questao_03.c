#include<stdio.h>
#include<string.h>

int main(void){
 
    char inverte( char palavra[], int n );
    char palavra[30];
    int n;

    printf("Entre com uma string: ");
    scanf("%s", palavra);
    
    n = strlen( palavra );

    printf("\n");
    
    for( ; n!=0; n--){
        printf("%c", inverte( palavra, n) );
        printf("\n");
    }

    printf("\n");
    
    system("pause");
    return 0;
    
}

char inverte( char palavra[], int n ){

    if( n ==1 ){
        return palavra[0];
    }

    else{
       return palavra[ n - 1 ];
    }

}