#include <stdio.h>
void main(){
    float x;
    float y;
    printf("ingrese la coordenada x\n");
    scanf("%f",&x);
    printf("ingrese la coordenada y\n");
    scanf("%f",&y);
    if(x==0 && y==0){
        printf("el punto esta en el centro");
    }
    else if (x == 0 || y == 0){
        printf("el punto esta sobre un eje");
    }
    else if(x>0 && y>0){
        printf("el punto esta en el primer cuadrante");
    }
    else if(x>0 && y<0){
        printf("el punto esta en el cuarto cuadrante");
    }
    else if(x<0 && y<0){
        printf("el punto esta en el tercer cuadrante");
    }
    else{
        printf("el punto esta en el segundo cuadrante");
    }
    
}