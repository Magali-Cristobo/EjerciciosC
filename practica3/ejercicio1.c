#include <stdio.h>
#include <stdbool.h>
#define max 50 

float edadPromedio(int edades[max], int ce);
void revisarFinDeDatos(bool *seguir);
int cantAlumnosSuperan(int edades[max], int ce, float promedio);

float edadPromedio(int edades[max], int ce){
    float suma=0;
    for(int i=0;i<ce;i++){
        suma+=edades[i];
    }
    return suma/ce;
}

void revisarFinDeDatos(bool *seguir){
    char opcion;
    do{
        printf("desea seguir ingresando edades?(S/N)\n");
        scanf("%c",&opcion);
    }
    while(opcion!='S' && opcion!='N');
    if(opcion=='S'){
        *seguir=true;
    }
    else{
        *seguir=false;
    }
}
int cantAlumnosSuperan(int edades[max],int ce, float promedio){
    int cantidad=0;
    for(int i=0;i<ce;i++){
        if(edades[i]>promedio){
            cantidad++;
        }
    }
    return (cantidad); 
}
 
int main(){
    int edades[max];
    bool seguir;
    int ce=0;
    revisarFinDeDatos(&seguir);
    while(seguir && ce<max){
        printf("ingrese una edad\n");
        scanf("%i",&edades[ce]);
        ce++;
        revisarFinDeDatos(&seguir);
    }
    printf("la edad promedio es: %f\n", edadPromedio(edades,ce));
    printf("la cantidad de alumnos que supera es: %i\n", cantAlumnosSuperan(edades,ce,edadPromedio(edades,ce)));
    return 0;
}