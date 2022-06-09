#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

int potencia(int base, int exponente);
void obtenerNumero(int *numero);
bool numeroValido(int numero);
int productoSumas(int a, int b);
int obtenerCifra(int numero, int cifra);
bool esta(int numero, int arreglo[], int ce);
void revisarFinDeDatos(bool *seguir);
void esFeliz(int numero, int *cantFelices, bool *esFeliz);
void insertarEnOrden(int top[], int *ce, int numero);
void mostrarTop(int top[], int ceTop);
float porcentaje(int cantFelices, int ce);
int obtenerCantCifras(int numero);
int obtenerCifra(int numero, int cifra);
void revisarFinDeDatos(bool *seguir);
int productoSumas(int a, int b);

//pre {numero > 0}
void insertarEnOrden(int top[], int *ce, int numero){ // va insertando de forma descendente los numeros
    bool esta=false;
    int i= *ce;
    while (i>=0 && !esta){
        if (top[i]< numero){ // si el numero es del top es menor entonces lo mueve una posicion a la derecha
            top[i+1] = top[i];
            i--;
        }
        else{
            esta = true;
        }
        
    }
    top[i+1] = numero;
    *ce = *ce + 1;
}
//pos {inserta numero en top de forma descendente}

// pre {ceTop>=0}
void mostrarTop(int top[], int ceTop){
    if (ceTop!=0){
        printf("El top es: \n");
        for (int i = 0; i < ceTop; i++){
            printf("%i. %i\n", i+1,top[i]);
        }    
    }
}
// pos {muestra el top de numeros felices}

// pre {ce > 0}
float porcentaje(int cantFelices, int ce){
    float total=ce;
    float personasFelices=cantFelices;
    return(personasFelices/total*100);
}
// pos {devuelve el porcentaje de numeros felices}

// pre {numero>0 y numero<999}
int obtenerCantCifras(int numero){
    int cantCifras=0;
    while (numero!=0){
        numero = numero/10;
        cantCifras++;
    }
    return cantCifras;
}
// pos {retorna la cantidad de cifras de un numero}

// pre {cifra >=0 y cifra <=3}
int obtenerCifra(int numero, int cifra){ 
    int resto=0;
    while (cifra!=0){
        resto= numero % 10;
        numero = numero/10;
        cifra--;
    }
    return resto;
    
}
//pos {devuelve el numero correspondiente a una determinada cifra}

// pre {}
bool esta(int numero, int arreglo[], int ce){
    for (int i = 0; i < ce; i++){
       if (arreglo[i] == numero){
           return true;
       }
    }
    return false;
    
}
// pos {devuelve un booleano que dice si ese numero ya salio en los cuadrados anteriores}

// pre {numero>=0 y numero<=999}
void esFeliz(int numero, int *cantFelices, bool *esFeliz){
    int numerosAnteriores[MAX];
    int ce=0;
    int suma=0;
    int cantCifras= obtenerCantCifras(numero);
    int cifraActual;
    if (numero==1){
        printf("1 ^2 = 1\n");
    }
    while (numero>1 && !esta(numero, numerosAnteriores,ce)){
        suma=0;
        ce++;
        numerosAnteriores[ce-1] = numero;
        for (int i = cantCifras; i > 0; i--){ //porque sino muestra los numeros al reves
          cifraActual=obtenerCifra(numero,i);
          suma+= potencia(cifraActual,2);
          if (i==1){
            printf("%i ^2 ", cifraActual);
          }
          else{
            printf("%i ^2 + ", cifraActual);
          }
        }
        printf(" = %i\n", suma);
        numero = suma;
        cantCifras=obtenerCantCifras(numero);
    }
    if (numero == 1){
        printf("es feliz\n"); 
        *cantFelices= *cantFelices+1;
        *esFeliz= true;
    }
    else{
        *esFeliz=false;
        printf("es infeliz, con el %i se forma el bucle \n", numero);
    }
}
//pos {muestra todo el desarrollo, indica si el numero es feliz o no y setea la cantidad de felices}

//pre {}
void revisarFinDeDatos(bool *seguir){
    char opcion;
    do{
        printf("Desea seguir ingresando datos (S/N) \n");
        scanf(" %c",&opcion);
    } while (opcion !='S' && opcion!='N');
    if (opcion == 'S'){
        *seguir=true;
    }
    else{
        *seguir=false;
    }
}
//pos{determina si se desean ingresar mas datos o no}

// pre {}
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
int potencia(int base, int exponente){
    int resultado=1;
    while (exponente>0){
        resultado =  productoSumas(resultado, base);
        exponente--;
    }
    return resultado;
    
} //2^3 = 2 * 1 / 2 * 2 / 4 * 2 
//pos{devuelve la potencia a partir de sumas sucesivas}

// pre {}
void obtenerNumero(int *numero){
    do{
        printf("Ingrese un numero positivo y de max 3 cifras\n");
        scanf("%i",numero);
    } while (!numeroValido(*numero)); // numeroValido(*numero) == false
}
// pos {valida el numero para que sea positivo y de max 3 cifras}
