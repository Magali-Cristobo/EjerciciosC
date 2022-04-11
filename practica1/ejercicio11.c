#include <stdio.h>

void main(){
    int edad = 1;
    int cantidadMujeres=0;
    int cantidadHombres=0;
    int totalAlumnos=0;
    int edadMaxima=0;
    int edadMinima=1000;
    float promedioEdades=0;
    float promedioEdadHombres=0;
    float promedioEdadMujeres=0;
    float porcentajeMujeres=0;
    float porcentajeHombres=0;
    int cantidadEdadMaxima=0;
    int cantidadEdadMinima=0;
    char sexo;

    while (edad !=0){
        printf("Ingrese la edad\n");
        scanf("%i", &edad);
        if(edad!=0){
            printf("Ingrese el sexo (M o F)\n");
            scanf(" %c", &sexo);
            while (sexo!= 'F' && sexo!= 'M'){
                printf("Ingrese el sexo (M o F)\n");
                scanf(" %c", &sexo);
            }
            if(sexo == 'F'){
                cantidadMujeres+=1;
                promedioEdadMujeres+=edad;
            }
            if(sexo == 'M'){
                cantidadHombres+=1;
                promedioEdadHombres+=edad;
            }
            if(edad > edadMaxima){
                edadMaxima = edad;
                cantidadEdadMaxima=1;
            }
            else if (edad == edadMaxima){
                cantidadEdadMaxima+=1;
            }
            if (edad < edadMinima){
                edadMinima = edad;
                cantidadEdadMinima=1;
            }
            else if(edadMinima==edadMinima){
                cantidadEdadMinima+=1;
            }
            totalAlumnos++;
        }
    }
    if(totalAlumnos==0){
        printf("no se ingresaron datos \n");

    }
    else{
        if(cantidadMujeres!=0){
            promedioEdadMujeres = promedioEdadMujeres / cantidadMujeres;
        }
        if(cantidadHombres!=0){
            promedioEdadHombres = promedioEdadHombres / cantidadHombres;
        }
        promedioEdades = (promedioEdadHombres + promedioEdadMujeres)/ totalAlumnos;
        
        porcentajeHombres = (float) cantidadHombres / totalAlumnos * 100;// tengo que castearlo a float porque sino devuelve 0
        porcentajeMujeres = (float) cantidadMujeres / totalAlumnos * 100;

        printf("la cantidad total de alumnos: %i \n", totalAlumnos);
        printf("la cantidad total de mujeres: %i \n", cantidadMujeres);
        printf("la cantidad total de hombres: %i \n", cantidadHombres);
        printf("la edad maxima: %i \n", edadMaxima);
        printf("la edad minima: %i \n", edadMinima);
        printf("promedio: %f \n", promedioEdades);
        printf("promedio mujeres: %f \n", promedioEdadMujeres);
        printf("promedio hombres: %f \n", promedioEdadHombres);
        printf("cantidad con edad minima: %i \n", cantidadEdadMinima);
        printf("cantidad con edad maxima: %i \n", cantidadEdadMaxima);
        printf("porcentaje mujeres: %f \n", porcentajeMujeres);
        printf("porcentaje hombres: %f \n", porcentajeHombres);
    }
    
}