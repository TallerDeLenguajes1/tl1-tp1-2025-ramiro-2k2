#include <stdio.h>

int main(){


        printf("Hola Mundo");

        int numero = 1;
        int *p;
        p=&numero;

        printf("El contenido del puntero es : %d\n",*p);
        printf("La direccion de memoria almaceda en el  puntero es : %p\n",p);
        printf("La direccion de memoria almaceda en numero es : %p\n",&numero);
        printf("La direccion de memoria del puntero es : %p\n",&p);
        printf("El Tamanio de memoria de numero es : %zu\n",sizeof(numero));





    return 0;
}