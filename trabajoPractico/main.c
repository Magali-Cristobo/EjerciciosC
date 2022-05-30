#include <stdio.h>
#include <stdbool.h>
#define MAXTOP 4
#define MAX 1000

int potencia(int base, int exponente);
void obtenerNumero(int *numero);
bool numeroValido(int numero);
int productoSumas(int a, int b);
int obtenerCifra(int numero, int cifra);
bool esta(int numero, int arreglo[], int ce);
void revisarFinDeDatos(bool *seguir);
void esFeliz(int numero, float *cantFelices);

void main(){
    int numero;
    float cantFelices = 0;
    bool seguir;
    int top[MAXTOP];
    float ce = 0;

    revisarFinDeDatos(&seguir);
    while (seguir && ce<MAX){
        obtenerNumero(&numero);
        ce++;
        esFeliz(numero, &cantFelices);
        revisarFinDeDatos(&seguir);
    }
    printf("el porcentaje es: %.1f \n",cantFelices/ce*100);
}

// pre {cifra <=3}
int obtenerCifra(int numero, int cifra){
    int pos1, pos2, pos3;
    pos1= numero/100;
    pos2 = (numero%100)/10;
    pos3 = (numero%100)% 10;
    if (cifra == 1){
        return pos1;
    }
    else if (cifra == 2){
        return pos2;
    }
    return pos3;
}


bool esta(int numero, int arreglo[], int ce){
    for (int i = 0; i < ce; i++){
       if (arreglo[i] == numero){
           return true;
       }
    }
    return false;
    
}
// pre {numero>=0 y numero<=999}
void esFeliz(int numero, float *cantFelices){
    int numerosAnteriores[MAX];
    int ce=0;
    int suma=0;
    while (numero>1 && !esta(numero, numerosAnteriores,ce)){
        ce++;
        numerosAnteriores[ce-1] = numero;
        suma = potencia(obtenerCifra(numero,1),2) +  potencia(obtenerCifra(numero,2),2) +  potencia(obtenerCifra(numero,3),2);
        printf("%i ^2 + %i ^2 + %i ^2 = %i\n",obtenerCifra(numero,1), obtenerCifra(numero,2), obtenerCifra(numero,3), suma);
        numero = suma;
    }
    if (numero == 1){
        printf("es feliz\n"); 
        *cantFelices= *cantFelices+1;
    }
    else{
        printf("es infeliz, con el %i se forma el bucle \n", numero);
    }
}
//pos {indica si el numero es feliz o no}

void revisarFinDeDatos(bool *seguir){
    char opcion;
    do{
        printf("Desea seguir ingresando datos (S/N) \n");
        scanf("%c",&opcion);
    } while (opcion !='S' && opcion!='N');
    if (opcion == 'S'){
        *seguir=true;
    }
    else{
        *seguir=false;
    }
}
//pos{determina si se desean ingresar mas datos o}
bool numeroValido(int numero){
    if (numero>0 && numero<=999){
        return true;
    }
    return false;
    
}
//pos{devuelve si el numero es valido o no}
// pre {a>=0 y b>=0}
int productoSumas(int a, int b){
    int producto=0;
    while (b>0){
        producto=producto+a;
        b--; // b=b-1
    }
    return producto;
    
}
// pos{devuelve el producto entre 2 numeros a partir de sumas sucesivas}
//pre {base >= 0 y exponente >=0}
int potencia(int base, int exponente){ //podemos poner directamente 2???
    int resultado=1;
    while (exponente>0){
        resultado =  productoSumas(resultado, base);
        exponente--;
    }
    return resultado;
    
} //2^3 = 2 * 1 / 2 * 2 / 4 * 2 
//pos{devuelve la potencia a partir de sumas sucesivas}

void obtenerNumero(int *numero){
    do{
        printf("Ingrese un numero positivo y de max 3 cifras\n");
        scanf("%i",numero);
    } while (!numeroValido(*numero));// numeroValido(*numero) == false
}
// pos { valida el numero }

//test y librerias?
// de cuanto es el arreglo?
// hay problema si mostramos la cifra con 0?
