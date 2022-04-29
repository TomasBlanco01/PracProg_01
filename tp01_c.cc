#include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <string.h> 
using namespace std;
struct persona{
    char nombre [20];
    char asado [3];
    char achuras [3];
    char pan [3];
    char vino [3];
    char cerveza [3];
    char postre [3];
    char ensalada [3];
    int total;
};
struct gastos{
    int precio_asado = 0;
    int precio_achuras = 0;
    int precio_pan = 0;
    int precio_vino = 0;
    int precio_cerveza = 0;
    int precio_postre = 0;
    int precio_ensalada = 0;
};

//----------------------------------------------------------------------------------------------------------------------------------

void dato_gastos (gastos gasto[]);
void dato_personas (persona personas[], int);
void evaluar_pagos (persona personas[], gastos gasto[], int);
void mostrar (persona personas[], int);

//----------------------------------------------------------------------------------------------------------------------------------

int main(){
	
    int cantidad_personas;
    
    puts("Cantidad de personas: ");
    scanf("%d", &cantidad_personas);

    persona personas [cantidad_personas];
    gastos gasto [1];

    dato_gastos(gasto);
    dato_personas(personas, cantidad_personas);
    evaluar_pagos(personas, gasto, cantidad_personas); 
    mostrar(personas, cantidad_personas);
}

//----------------------------------------------------------------------------------------------------------------------------------

void dato_gastos (gastos gasto[]){

    puts("Gasto en asado: ");
    scanf("%d", &gasto[0].precio_asado);

    puts("Gasto en achuras: ");
    scanf("%d", &gasto[0].precio_achuras);

    puts("Gasto en pan: ");
    scanf("%d", &gasto[0].precio_pan);

    puts("Gasto en vino: ");
    scanf("%d", &gasto[0].precio_vino);

    puts("Gasto en cerveza: ");
    scanf("%d", &gasto[0].precio_cerveza);

    puts("Gasto en postre: ");
    scanf("%d", &gasto[0].precio_postre);

    puts("Gasto en ensalada: ");
    scanf("%d", &gasto[0].precio_ensalada);
}

//----------------------------------------------------------------------------------------------------------------------------------

void dato_personas (persona personas[], int cantidad_personas){
	
    for (int i=0; i < cantidad_personas ; i++){
        
        puts("Nombre: ");
        scanf("%s", &personas[i].nombre);
        
        puts("Comio asado?: ");
        scanf("%s", &personas[i].asado);

        puts("Comio achuras?: ");
        scanf("%s", &personas[i].achuras);

        puts("Comio pan?: ");
        scanf("%s", &personas[i].pan);

        puts("Tomo vino?: ");
        scanf("%s", &personas[i].vino);

        puts("Tomo cerveza?: ");
        scanf("%s", &personas[i].cerveza);

        puts("Comio postre?: ");
        scanf("%s", &personas[i].postre);

        puts("Comio ensalada?: ");
        scanf("%s", &personas[i].ensalada);
    }
}

//----------------------------------------------------------------------------------------------------------------------------------

void evaluar_pagos(persona personas[], gastos gasto[], int cantidad_personas){
	
    int f_asado=0, f_achuras=0, f_pan=0, f_vino=0, f_cerveza=0, f_postre=0, f_ensalada=0; //flags

    for (int i=0 ; i < cantidad_personas ; i++){
        if(strcmp(personas[i].asado, "si") == 0){
            f_asado ++;
        }

        if(strcmp(personas[i].achuras, "si") == 0){
            f_achuras ++;
        }

        if(strcmp(personas[i].pan, "si") == 0){
            f_pan ++;
        }

        if(strcmp(personas[i].vino, "si") == 0){
            f_vino ++;
        }

        if(strcmp(personas[i].cerveza, "si") == 0){
            f_cerveza ++;
        }

        if(strcmp(personas[i].postre, "si") == 0){
            f_postre ++;
        }

        if(strcmp(personas[i].ensalada, "si") == 0){
            f_ensalada ++;
        }
    }
    
    for (int i=0; i < cantidad_personas ; i++){
        
        if(strcmp(personas[i].asado, "si") == 0){
            personas[i].total += (gasto[0].precio_asado / f_asado);
        }
        
        if(strcmp(personas[i].achuras, "si") == 0){
            personas[i].total += (gasto[0].precio_achuras / f_achuras);
        }

        if(strcmp(personas[i].pan, "si") == 0){
            personas[i].total += (gasto[0].precio_pan / f_pan);
        }

        if(strcmp(personas[i].vino, "si") == 0){
            personas[i].total += (gasto[0].precio_vino / f_vino);
        }

        if(strcmp(personas[i].cerveza, "si") == 0){
            personas[i].total += (gasto[0].precio_cerveza / f_cerveza);
        }

        if(strcmp(personas[i].postre, "si") == 0){
            personas[i].total += (gasto[0].precio_postre / f_postre);
        }

        if(strcmp(personas[i].ensalada, "si") == 0){
            personas[i].total += (gasto[0].precio_ensalada / f_ensalada);
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------------------

void mostrar (persona personas[], int cantidad_personas){
	
    printf("NOMBRE\t\tASADO\t\tACHURAS\t\tPAN\t\tVINO\t\tCERVEZA\t\tPOSTRE\t\tENSALADA\t\tTOTAL\n" );

	for(int i=0; i < cantidad_personas ; i++)
    {
        printf("%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\t\t\t%s\t\t\t%d\n", personas[i].nombre, personas[i].asado, personas[i].achuras, personas[i].pan, personas[i].vino, personas[i].cerveza, personas[i].postre, personas[i].ensalada, personas[i].total); 
    }
}
