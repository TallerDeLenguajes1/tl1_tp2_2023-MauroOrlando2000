#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mostrarDatos(compu PC[5]);
void PCAntigua(compu PC[5]);
void PCMasRapida(compu PC[5]);

struct compu {
    int velocidad;            //entre 1 y 3 GHz
    int anio;                 //entre 2015 y 2023
    int cantidad;             //entre 1 y 8
    char *tipo_cpu;           //valores del arreglo tipos
} typedef compu;

int main()
{
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu PC[5], *Punt;
    int i, num;

    for(i=0; i<5; i++)
    {
        Punt = &PC[i];
        printf("*****Computadora %d*****\n", i+1);
        printf("¿Que velocidad posee esta computadora? (en GHz): ");
        scanf("%d", PC[i].velocidad);
        printf("¿De que anio es esta pc?: ");
        scanf("%d", PC[i].anio);
        printf("¿Cuantos nucleos posee el procesador de esta pc?: ");
        scanf("%d", PC[i].cantidad);
        printf("Elija que tipo de cpu lleva integrada la PC\n");
        printf("1=Intel, 2=AMD, 3=Celeron, 4=Athlon, 5=Core, 6=Pentium\n");
        scanf("%d", &num);
        Punt->tipo_cpu = tipos[(num-1)];
        printf("\n\n");
    }

    mostrarDatos(PC);

    return 0;
}

void mostrarDatos(compu PC[5])
{
    int i;

    for(i=0; i<5; i++)
    {
        printf("*****Computadora %d*****\n", i+1);
        printf("Velocidad: %d GHz\n", PC[i].velocidad);
        printf("Anio de fabricacion: %d\n", PC[i].anio);
        printf("Cantidad de nucleos: %d\n", PC[i].cantidad);
        printf("Tipo de cpu: %s\n\n", PC[i].tipo_cpu);
    }
}

void PCAntigua(compu PC[5])
{
    int i=1, aux=0, anio1, anio2;
    anio1 = PC[0].anio;

    while(i<5)
    {
        anio2 = PC[i].anio;
        if(anio1 > anio2)
        {
            anio1 = anio2;
            aux = i;
        }
        i++;
    }

    printf("*****Computadora %d*****\n", aux);
    printf("Velocidad: %d GHz\n", PC[aux].velocidad);
    printf("Anio de fabricacion: %d\n", PC[aux].anio);
    printf("Cantidad de nucleos: %d\n", PC[aux].cantidad);
    printf("Tipo de cpu: %s\n\n", PC[aux].tipo_cpu);
}