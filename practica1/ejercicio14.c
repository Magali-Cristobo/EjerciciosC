#include <stdio.h>
 
void main(){
    int cantidadHijos=0;
    int cantMujeresHijos=0;
    int cantidadHombres=0;
    int sexo;
    int antiguedad;
    int cantHombresAntiguedad=0;
    int nEmpleado;

    do{
        printf("ingrese el numero de empleado\n");
        scanf("%i",&nEmpleado);
    }   while(nEmpleado<0);

    while(nEmpleado>0){
        do{
            printf("ingrese el sexo (1 o 2)\n");
            scanf("%i",&sexo);
        }while(sexo!=1 && sexo!=2);
        do{
            printf("ingrese la cantidad de hijos\n");
            scanf("%i",&cantidadHijos);
        }while(cantidadHijos<0);
        do{
            printf("ingrese la antiguedad\n");
            scanf("%i",&antiguedad);
        }while(antiguedad<0);
        if(sexo==2 && cantidadHijos>2){
            cantMujeresHijos++;         
        }
        else if(sexo==1){
            cantidadHombres++;
            if (antiguedad>=10){
                cantHombresAntiguedad++;
            }
        }
        do{
            printf("ingrese el numero de empleado\n");
            scanf("%i",&nEmpleado);
        }while(nEmpleado<0);
    }
    printf("la cantidad de mujeres con mas de 2 hijos es: %i\n", cantMujeresHijos);
    if (cantidadHombres==0){
        printf("el porcentaje es 0, no se ingresaron hombres\n");
    }
    else{
        printf("el porcentaje de hombres con mas de 10 años de antiguedad es: %d \n",cantHombresAntiguedad/cantidadHombres * 100);
    }
}
//solo nos interesa saber si las mujeres tienen hijos, entonces no se le pregunta a los hombres, esta bien?