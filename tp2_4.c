#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAMA 5

struct compu {
    int velocidad;            //entre 1 y 3 GHz
    int anio;                 //entre 2015 y 2023
    int cantidad;             //entre 1 y 8
    char *tipo_cpu;           //valores del arreglo tipos
} typedef compu;

void mostrarDatos(compu PC[5]);
void olderPC(compu PC[5]);
void quickerPC(compu PC[5]);

int main()
{
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu PC[TAMA];
    int i, num;

    for(i=0; i<TAMA; i++)
    {
        printf("*****Computadora %d*****\n", i+1);
        printf("¿Que velocidad posee esta computadora? (en GHz): ");
        scanf("%d", &PC[i].velocidad);
        printf("¿De que anio es esta pc? (entre 2015 y 2023): ");
        scanf("%d", &PC[i].anio);
        printf("¿Cuantos nucleos posee el procesador de esta pc?: ");
        scanf("%d", &PC[i].cantidad);
        printf("Elija que tipo de cpu lleva integrada la PC\n");
        printf("1=Intel, 2=AMD, 3=Celeron, 4=Athlon, 5=Core, 6=Pentium\n");
        scanf("%d", &num);
        PC[i].tipo_cpu = tipos[(num-1)];
        printf("\n\n");
    }

    mostrarDatos(PC);
    olderPC(PC);
    quickerPC(PC);

    return 0;
}

void mostrarDatos(compu PC[5])
{
    int i;

    for(i=0; i<TAMA; i++)
    {
        printf("**********Computadora %d**********\n", i+1);
        printf("Procesador %s de %d nucleos de %d GHz\n", PC[i].tipo_cpu, PC[i].cantidad, PC[i].velocidad);
        printf("Anio de fabricacion: %d\n\n", PC[i].anio);
    }
}

void olderPC(compu PC[5])
{
    int i=0, aux=0, anio;
    anio = PC[i].anio;

    for(i=1; i<TAMA; i++)
    {
        if(anio > PC[i].anio)
        {
            aux = i;
            anio = PC[i].anio;
        }
    }

    printf("Computadora mas antigua\n");
    printf("Procesador %s de %d nucleos de %d GHz\n", PC[aux].tipo_cpu, PC[aux].cantidad, PC[aux].velocidad);
    printf("Anio de fabricacion: %d\n\n", PC[aux].anio);
}

void quickerPC(compu PC[5])
{
    int i=0, aux=0, speed1, speed2, nucleos;
    speed1 = PC[i].velocidad;
    nucleos = PC[i].cantidad;

    for(i=1; i<TAMA; i++)
    {
        speed2 = PC[i].velocidad;
        if(speed1 < speed2)
        {
            aux = i;
        }
        else if(speed1 == speed2)
        {
            if(nucleos < PC[i].cantidad)
            {
                aux = i;
            }
        }
    }

    printf("Computadora mas rapida\n");
    printf("Procesador %s de %d nucleos de %d GHz\n", PC[aux].tipo_cpu, PC[aux].cantidad, PC[aux].velocidad);
    printf("Anio de fabricacion: %d\n\n", PC[aux].anio);
}