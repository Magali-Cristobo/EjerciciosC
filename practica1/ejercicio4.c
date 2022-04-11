#include <stdio.h>

void main(){
    int horasIniciales;
    int segundosIniciales;
    int minutosIniciales;
    int segundosTranscurridos;
    int horaFinal;
    int minutoFinal;
    int segundosFinales;
    printf("Ingrese horas, segundos y minutos inciales");
    scanf("%i",&horasIniciales);
    scanf("%i",&segundosIniciales);
    scanf("%i",&minutosIniciales);
    printf("Ingrese los segundos transcurridos");
    scanf("%i",&segundosTranscurridos);

    horaFinal = segundosTranscurridos/3600;
    minutoFinal = (segundosTranscurridos % 3600) / 60;
    segundosFinales = (segundosTranscurridos % 3600) % 60;

    printf("horas: %i\n",horaFinal);
    printf("minutos: %i\n",minutoFinal);
    printf("segundos: %i\n",segundosFinales);
}