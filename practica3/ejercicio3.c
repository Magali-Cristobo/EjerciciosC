#include <stdio.h>
#include <stdbool.h>

#define max 1000
bool esta(int arreglo[max], int ce, int elemento);
void busquedaSecuencial(int arreglo[max], int ce, int *pos, int elemento);
void posicionesElemento(int arreglo[max], int ce, int elemento, int posiciones[max],int *ce2);
void primeraYUltimaPos(int arreglo[max], int ce, int elemento,int posiciones[2]);


//a
bool esta(int arreglo[max], int ce, int elemento){
    for(int i=0;i<ce;i++){
        if(arreglo[i]==elemento){
            return true;
        }
    }
    return false;
}

//b 
void busquedaSecuencial(int arreglo[max], int ce, int *pos, int elemento){
    bool esta=false;
     for(int i=0;i<ce && !esta;i++){
        if(arreglo[i]==elemento){
            *pos=i;
            esta=true;
        }
    }
   
}

//c
void posicionesElemento(int arreglo[max], int ce, int elemento, int posiciones[max],int *ce2){
    for(int i=0;i<ce;i++){
        if(arreglo[i]==elemento){
            posiciones[*ce2]=i;
            *ce2++;
        }
    }
}

//d 
void primeraYUltimaPos(int arreglo[max], int ce, int elemento,int posiciones[2]){
    bool primeraPos=true;
     for(int i=0;i<ce;i++){
        if(arreglo[i]==elemento && primeraPos){
            posiciones[0]=i;
            primeraPos=false;
        }
        else if(arreglo[i]==elemento){
            posiciones[1]=i;
        }
    }

}
int main(){
    int ce=5;
    int posicion;
    int arreglo[max]={1,5,3,4,5};
    int posiciones[max];
    int ce2=0;
    busquedaSecuencial(arreglo,ce,&posicion,5);
    posicionesElemento(arreglo,ce,5,posiciones,&ce2);
    printf("esta: %i\n", esta(arreglo, ce, 5));
    printf("posicion en la que esta: %i\n",posicion);
    for(int i=0;i<ce2;i++){
        printf("%i\n",posiciones[i]);
    }
    ce2=2;
    primeraYUltimaPos(arreglo,ce,5,posiciones);
    printf("primera pos: %i, segunda pos: %i",posiciones[0],posiciones[1]);
    return 0;
}