#include <stdio.h>

void main(){
    int a;
    int b;
    printf("Ingrese dos numeros enteros\n");
    scanf("%i",&a);
    scanf("%i",&b);
    
    if(a==0 || b==0){
        printf("%i",0);
    }
    else if((a>0 && b>0)|| (a<0 && b<0)){
        printf("%i",a+b);
    }
    else if(a>b){
        printf("%i",a-b);
    }
    else{
        printf("%i",b-a);
    }
}