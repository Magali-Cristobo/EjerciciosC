#include <stdio.h>
const float IVA = 0.21;
int calcularIva(float importeVenta);
int sumarNaturalesAnteriores(int numero);

void main(){
    float valorVenta=0;
    printf("Ingrese el valor de la venta ");
    scanf("%f",&valorVenta);
    float valorIva = calcularIva(valorVenta);
    float totalAPagar = valorVenta + valorIva;
    printf("el valor del iva es: %f\n",valorIva);
    printf("el valor total a pagar es: %f\n",totalAPagar);
    sumarNaturalesAnteriores(4);

}
int sumarNaturalesAnteriores(int numero){ //ejercicio 10
    int suma = 0;
    while (numero>0){
        suma+=numero;
        numero--;
    }
     printf("la suma es: %i\n",suma);
}
int calcularIva(float importeVenta){
    return importeVenta*IVA;
}