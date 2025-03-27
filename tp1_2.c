#include <stdio.h>


int cuadradoconretorno(int num1,int num2);
void cuadrado(int num1,int num2);
void direccionycontenido(int variable);
void invertir(int num1, int num2);
void ordenar(int num1, int num2);


int main(){

    int num1,num2,resultado,variable;

   
    
    resultado= cuadradoconretorno(num1,num2);
    printf("el cuadrado de la base ingresada es :%d\n",resultado);
    cuadrado(num1,num2);
    direccionycontenido(variable);
    invertir(num1,num2);
    ordenar(num1,num2);

    




    return 0;
}


int cuadradoconretorno(int num1,int num2){

    int aux=1;
    printf("Ingrese 2 Numeros:\n");
    printf("Ingrese la Base:\n");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Ingrese el Exponente:\n");
    scanf("%d",&num2);

    for (int i = 1; i <= num2; i++)
    {
        aux*= num1;

    }

    return(aux);
}



void cuadrado(int num1,int num2){

    int aux=1;
    printf("Ingrese 2 Numeros:\n");
    printf("Ingrese la Base:\n");
    scanf("%d",&num1);
    fflush(stdin);
    printf("Ingrese el Exponente:\n");
    scanf("%d",&num2);

    for (int i = 1; i <= num2; i++)
    {
        aux*= num1;

    }
    
    printf("El cuadrado del numero ingresado es:%d\n",aux);


}


void direccionycontenido(int variable){

    printf("Ingrese una numero entero :\n");
    scanf("%d",&variable);
    
    printf("El contenido de la variable es: %d \n",variable);
    printf("la direccion de memoria de la variable es %p :\n",&variable);
    



}


void invertir(int num1, int num2){

    int aux;
    printf("Ingrese 2 numeros:\n");
    printf(" 1er numero:\n");
    scanf("%d",&num1);
    fflush(stdin);
    printf(" 2do numero:\n");
    scanf("%d",&num2);
    printf("El contenido introducido es n1: %d y n2: %d\n",num1,num2);
    aux =num1;
    num1=num2;
    num2=aux;
    
    printf("El contenido invertido es n1: %d y n2: %d\n",num1,num2);

}


void ordenar(int num1, int num2){

    int aux;
    printf("Ingrese 2 numeros:\n");
    printf(" 1er numero:\n");
    scanf("%d",&num1);
    fflush(stdin);
    printf(" 2do numero:\n");
    scanf("%d",&num2);

    if (num1> num2)
    {
        aux =num1;
        num1=num2;
        num2=aux;
    }
    
    printf("El numero menor es %d y el mayor %d\n",num1,num2);
}