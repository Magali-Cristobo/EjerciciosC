#include <stdio.h>
#include <stdbool.h>

void main(){
    int numero;
    int numeroAnterior;
    bool ordenadoAsc=0;
    bool ordenadoDesc= 0;
    bool ordenado=1;
    printf("ingrese un numero \n");
    scanf("%i", &numero);
    numeroAnterior=numero;
    while(numero!=0 && ordenado){
        if(numero < numeroAnterior && ordenadoAsc){// si es menor pero yo estaba ordenando ascendentemente
            ordenado=0;
        }
        else if (numero>numeroAnterior && ordenadoDesc){ //si es mayor pero estaba ordenando descendentemente
            ordenado=0;
        }
        else if(numero<numeroAnterior){
            ordenadoDesc=1;
        }
        else if(numero>numeroAnterior){
            ordenadoAsc=1;
        }
        numeroAnterior=numero;
        printf("ingrese un numero \n");
        scanf("%i", &numero);
    }
    if(!ordenado){
        printf("no esta ordenado\n");
    }
    else if(ordenadoAsc){
        printf("esta ordenado ascendentemente\n");
    }
    else{
        printf("esta ordenado descendentemente\n");
    }
   
}