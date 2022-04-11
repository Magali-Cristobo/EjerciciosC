#include <stdio.h>

void divisores(int numero);
void divisores(int numero){
    int posibleDivisor=numero;
    while(posibleDivisor>0){
        if (numero % posibleDivisor==0){
            printf("Divisor: %i\n",posibleDivisor);
        }
        posibleDivisor--;
    }
}
int cantidadDivisores(int numero);
int cantidadDivisores(int numero){
    int posibleDivisor=numero;
    int cantidadDivisores=0;
    while(posibleDivisor>0){
        if(numero % posibleDivisor==0){
            cantidadDivisores++;
        }
        posibleDivisor--;
    }
    return(cantidadDivisores);
}
void main(){
    int numero;
    printf("Ingrese un numero\n");
    scanf("%i",&numero);
    divisores(numero);
    printf("La cantidad de divisores es: %i\n", cantidadDivisores(numero));
}