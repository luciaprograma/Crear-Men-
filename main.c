#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "library.h"

void cargaVector(V_alumno[]);
void inicCalif(V_alumno V[]);

int main()
{

    V_alumno mis_alumnos[2];//Declaracion e instanciacion de vector de estructura
    //Declaração e instanciação de vetores de estrutura
    // Declaration and instatiation of the array structure

    int ans; //1-Crear menú-create menu-create menu.
    printf("Ingrese que desea hacer\n 1) Cargar vector de registro\n 2) Consultar Vector\n 3) Crear TXT\n 4) Salir\n ");

    //Digite o que deseja fazer 1) Carregar vetor de estrutura(registro) 2) Consultar vetor 3)Criar TXT 4) Sair
    //Write your option 1) To load struture array 2) To query struct 3) Create TXT file 4) Exit
    fflush(stdin);
    scanf("%d", &ans);
    do
    {
        switch(ans)
        {
        case 1:
            printf("Ingreso opcion 1\n");
            //inicializar a matriz que vai conter as notas escolares
            inicCalif(mis_alumnos);//initialize the array thats gonna hold the school grades

            //Carregar vetor manualmente // load array manually
            cargaVector(mis_alumnos); //Option 1 selected //Digitou a opção 1

            //Re print menu // imprimir pelo consola o menu
            printf("Ingrese que desea hacer\n 1) Cargar vector de registro\n 2) Consultar Vector\n 3) Crear TXT\n 4) Salir\n ");
            fflush(stdin);
            scanf("%d", &ans);

            break;
        case 2:
            printf("Ingreso opcion 2\n"); //Option 2 selected //Digitou a opção 2
            printf("Ingrese que desea hacer\n 1) Cargar vector de registro\n 2) Consultar Vector\n 3) Crear TXT\n 4) Salir\n ");
            fflush(stdin);
            scanf("%d", &ans);
            break;
        case 3:
            printf("Ingreso opcion \n"); //Option 3 selected //Digitou a opção 3
            printf("Ingrese que desea hacer\n 1) Cargar vector de registro\n 2) Consultar Vector\n 3) Crear TXT\n 4) Salir\n ");
            fflush(stdin);
            scanf("%d", &ans);
            break;
        case 4:
            printf("Salio del menu\n"); //Exit menu //Digitou a sair

            break;
        default:
            printf("Opcion incorrecta\n"); //Wrong Option //Digitou a opção incorreta
            printf("Ingrese que desea hacer\n 1) Cargar vector de registro\n 2) Consultar Vector\n 3) Crear TXT\n 4) Salir\n ");
            fflush(stdin);
            scanf("%d", &ans);
            break;
        }
    }
    while(ans!=4);
}
