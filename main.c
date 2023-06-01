#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ROJO     12
#define VERDE   10
#define AMARILLO  14
#define MAGENTA 13
#define CYAN    11
#define BLANCO   15

void color(int color);
void menu();
void verificarArchivo(char archivo[]);

const char tpFinal[] = "Gestor de Stock V0.02";

int main()
{
    int opc;
    int loop = 1;
    int flag;
    char listadoFile[] = "listado.bin";
    FILE *listado;

    verificarArchivo(listadoFile);



    while(loop == 1)
    {
        menu();
        fflush(stdin);
        scanf("%d", &opc);
        switch(opc)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        case 6:
            system("cls");
            color(VERDE);
            printf("\n\nHasta luego!\n\n");
            color(BLANCO);
            system("pause");
            system("cls");
            exit(0);
            break;

        default:
            system("cls");
            color(ROJO);
            printf("\n\nOpcion invalida!\n");
            printf("intente nuevamente...\n\n");
            color(BLANCO);
            system("pause");
            system("cls");
            loop = 1;
            break;
        }
    }

    return 0;
}

void menu()
{
    color(CYAN);
    printf("  _______________________________________________________________  \n");
    printf(" |                                                               |\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf("                     %s                     ", tpFinal);
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |_______________________________________________________________|\n");
    printf(" |                                                               |\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf(" 1. MOSTRAR PRODUCTOS ORDENADOS POR ID                         ");
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf(" 2. MOSTRAR PRODUCTOS ORDENADOS POR NOMBRE                     ");
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf(" 3. AGREGAR NUEVO PRODUCTO                                     ");
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf(" 4. AGREGAR EXISTENCIAS DE PRODUCTO (ID)                       ");
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(BLANCO);
    printf(" 5. CREAR CARRITO DE SALIDA DE PRODUCTOS                       ");
    color(CYAN);
    printf("|\n");
    printf(" |                                                               |\n");
    printf(" |");
    color(ROJO);
    printf(" 6. SALIR                                                      ");
    color(CYAN);
    printf("|\n"); /**AGREGAR MAS OPCIONES ACÁ */
    printf(" |                                                               |\n");
    printf(" |_______________________________________________________________|");
    printf("\n\n  Ingrese su opcion: ");
    color(BLANCO);
}

void color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void verificarArchivo(char archivo[])
{
    FILE *arch;
    arch = fopen(archivo, "rb");
    color(AMARILLO);
    printf("  %s\n",tpFinal);
    color(BLANCO);
    printf("\n  Verificando la existencia del listado...");
    Sleep(1500);
    if(arch != NULL)
    {
        system("cls");
        color(AMARILLO);
        printf("  %s\n",tpFinal);
        color(VERDE);
        printf("\n  El archivo existe!\n\n  Entrando al menu...");
        fclose(arch);
        Sleep(1250);
        system("cls");
    }
    else
    {
        system("cls");
        color(AMARILLO);
        printf("  %s\n",tpFinal);
        color(ROJO);
        printf("\n  El archivo NO existe!");
        color(BLANCO);
        printf("\n\n  Creando el arhivo...");
        Sleep(2000);
        arch = fopen(archivo, "ab");
        if(arch != NULL)
        {
            system("cls");
            color(AMARILLO);
            printf("  %s\n",tpFinal);
            color(VERDE);
            printf("\n  Archivo creado exitosamente!\n\n  Entrando al menu...");
            Sleep(1250);
            fclose(arch);
            system("cls");
        }
        else
        {
            system("cls");
            color(AMARILLO);
            printf("  %s\n",tpFinal);
            color(ROJO);
            printf("\n  Error inesperado al crear el archivo!\n\n  Cerrando el programa...");
            color(BLANCO);
            exit(1);
        }
    }
}
