#include <stdio.h>

void mostrarNumeros(int numero1, int numero2);
void mostrarPositivosPares(int numero);
void mostrarMultiplosCinco(int numero);

void mostrarMultiplosCinco(int numero){
    int numeroMultiplo=5;
    while (numeroMultiplo<numero){
        printf("multiplo: %i\n",numeroMultiplo);
        numeroMultiplo+=5;
    }
}

void mostrarPositivosPares(int numero){
    int numeroPar=2;
    while (numeroPar<numero){
        printf("multiplo: %i\n",numeroPar);
        numeroPar+=2;
    }
}

void mostrarNumeros(int numero1, int numero2){
    if(numero1+numero2>=20){
        mostrarMultiplosCinco(numero1+numero2);
    }
    else{
        mostrarPositivosPares(numero1+numero2);
    }
}
void main(){
    int numero1;
    int numero2;
    printf("Ingrese dos numeros:\n");
    scanf("%i",&numero1);
    scanf("%i",&numero2);
    mostrarNumeros(numero1,numero2);
}