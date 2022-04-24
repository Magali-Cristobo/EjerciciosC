#include <stdio.h>

int productoSumando(int numero1, int numero2);
int modulo(int numero1);

int modulo(int numero1){
    if (numero1<0){
        return numero1*-1;
    }
    return numero1;
}

int productoSumando(int numero1, int numero2){
    int suma=0;
    int aux = modulo(numero2);
    while(aux>0){
        suma+=numero1;
        aux--;
    }
    
    if (numero1<0 && numero2<0 || numero2<0){
        suma = suma *-1;
    }

    return suma;
}
void main(){
    int numero1;
    int numero2;
    printf("Ingrese dos numeros\n");
    scanf("%i", &numero1);
    scanf("%i", &numero2);
    printf("El producto es: %i\n", productoSumando(numero1, numero2));
}
//me habia faltado pensar que pasaba cuando era negativo