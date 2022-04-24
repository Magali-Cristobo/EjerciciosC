#include <stdio.h>
#include <stdbool.h>

void sumarDias(int a, int d, int m, int n, int* a2, int* m2, int* d2);
int cantDias(int a , int m);
bool esBisiciesto(int a);

bool esBisiesto(int a){
    if (a % 4 ==0){
        if ((a % 100 !=0) && (a % 400 == 0)){
            return true;
        }
    }
    return false;
}

int cantDias(int a, int m){
    int dias=31;
    if (m==4 || m==6 || m==9 || m==11){
        dias=30;
    }
    else if (m==2){
        if (esBisiesto(a)){
            dias=29;
        }
        else{
            dias=28;
        }
    }
    return dias;
}

void sumarDias(int a, int d, int m, int n, int* a2, int* m2, int* d2){
    *a2=a;
    *d2=d;
    *m2=m;
    while (n>0){
        if (*d2+n<=cantDias(*a2,*m2)){
            *d2+=n;
            n-=cantDias(*a2, *m2); //ver esto
        }
        else{
            while (*d2+n>cantDias(*a2,*m2)){
                if (*m2+1>12){
                    *a2 = *a2+1;
                    *m2=0;
                }
                *d2= *d2+n- cantDias(*a2,*m2);
                n-=cantDias(*a2,*m2);
                *m2= *m2 + 1;
            }
        } 
    }
}


void main(){
    int a,d,m,a2,m2,d2,n;
    printf("ingrese una fecha\n");
    scanf("%i", &d);
    scanf("%i", &m);
    scanf("%i", &a);
    printf("ingrese la cantidad de dias a sumar\n");
    scanf("%i", &n);
    //fechaValida(d,m,a);
    sumarDias(a,d,m,n,&a2,&m2,&d2);
    printf("dia: %i \n",d2);
    printf("mes: %i \n",m2);
    printf("año: %i \n",a2);


}