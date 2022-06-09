#include <stdio.h>
#include <stdbool.h>
#include "libreria.h"
#define MAXTOP 4
#define MAX 1000


void main(){
    int numero;
    int cantFelices = 0;
    bool seguir;
    int top[MAXTOP];
    int ceTop=0;
    int cn = 0;
    bool feliz=true;

    revisarFinDeDatos(&seguir);
    while (seguir && cn<MAX){
        obtenerNumero(&numero);
        cn++;
        esFeliz(numero, &cantFelices, &feliz);
        if (feliz){
           insertarEnOrden(top,&ceTop,numero);
        }
        if (ceTop == MAXTOP){
            ceTop--;
        }
        revisarFinDeDatos(&seguir);
    }
    if (cn>0){
       printf("el porcentaje de numeros felices es: %.1f ",porcentaje(cantFelices, cn));
       printf("%c \n", '%');
    }
    else{
        printf("No se ingresaron numeros\n");
    }
    
   mostrarTop(top,ceTop);
}