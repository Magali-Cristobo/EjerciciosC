#include <stdio.h>
const float pi = 0.141554;

void main(){
    float altura;
    float radio;
    float volumen;
    printf("Ingrese la altura y luego el radio");
    scanf("%f",&altura);
    scanf("%f",&radio);
    volumen = altura*radio*radio*pi;
    printf("el volumen del cilindro es: %f\n",volumen);

}


/* con funciones
float calcularVolumen(float altura, float radio);

void main(){
    float altura;
    float radio;
    printf("Ingrese la altura y luego el radio");
    scanf("%f",&altura);
    scanf("%f",&radio);
    float volumen = calcularVolumen(altura, radio);
    printf("el volumen del cilindro es: %f\n",volumen);
}

float calcularVolumen(float altura, float radio){
    return (altura*radio*radio*pi);
}
*/