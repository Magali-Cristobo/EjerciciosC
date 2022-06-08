#include <stdio.h>
#include "libreria.h"
#include <stdbool.h>
#include <assert.h>
 
//tests para es feliz y potencia
int main(){
    int numero;
    int cantFelices=0;
    bool feliz=false;
    assert(potencia(0,2)==0);
    assert(potencia(1,2)==1);
    assert(potencia(2,2)==4);
    assert(potencia(3,2)==9);
    assert(potencia(4,2)==16);
    assert(potencia(5,2)==25);
    assert(potencia(6,2)==36);
    assert(potencia(7,2)==49);
    assert(potencia(8,2)==64);
    assert(potencia(9,2)==81);

    //felices
    esFeliz(1,&cantFelices,&feliz);
    assert(feliz == true);
    esFeliz(13,&cantFelices,&feliz);
    assert(feliz == true);
    esFeliz(23,&cantFelices,&feliz);
    assert(feliz == true);
    esFeliz(97,&cantFelices,&feliz);
    assert(feliz == true);
    esFeliz(565,&cantFelices,&feliz);
    assert(feliz == true);
    
    //infelices
    esFeliz(2,&cantFelices,&feliz);
    assert(feliz == false);
    esFeliz(3,&cantFelices,&feliz);
    assert(feliz == false);
    esFeliz(73,&cantFelices,&feliz);
    assert(feliz == false);
    esFeliz(121,&cantFelices,&feliz);
    assert(feliz == false);
    esFeliz(999,&cantFelices,&feliz);
    assert(feliz == false);
    printf("pass\n");
    return 0;
}