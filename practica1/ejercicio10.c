#include <stdio.h>

void main(){
    int numero=0;
    int suma=0;
    do {
        printf("Ingrese un numero entero positivo \n");
        scanf("%i",&numero);
    } while (numero<=0);
    
    while(numero>=0){
        suma+=numero;
        numero--;
    }
    printf("la suma es %i: ",suma);
}