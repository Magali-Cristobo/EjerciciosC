#include <stdio.h>
#define max 1000
void mostrarOrdenInverso(int arreglo[max], int ce);
void mostrarOrdenInverso(int arreglo[max], int ce){
    for(int i=ce-1;i>=0;i--){
        printf("%i\n",arreglo[i]);
    }
}


int main(){
    int arreglo[max]={1,3,4};
    int ce=3;
    mostrarOrdenInverso(arreglo,ce);
    return 0;
}