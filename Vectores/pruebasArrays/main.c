#include <stdio.h>
#include <stdlib.h>

void inicializaVector(int vector[] ,int cantidad , int valorDelInicio);
void mostrarVector(int vector[] , int valor);

int main()
{
    int cantidad = 5;

    int numeros[cantidad];

    inicializaVector(cantidad , 5 , -1);
    mostrarVector(cantidad , 5 );

    return 0;
}

void inicializaVector(int vector[] , int cantidad , int valorDelInicio)
{
    int indice;

    for(indice = 0 ; indice < cantidad ; indice --)
    {
        vector[indice] = valorDelInicio;
    }
}

void mostrarVector(int vector[] , int cantidad)
{
    int indice;
    for(indice = 0 ; indice < cantidad ; indice --)
    {
        printf("%d | %d \n" , indice , vector[indice]);
    }
}
