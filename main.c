#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define ROJO     12
#define VERDE   10
#define AMARILLO  14
#define MAGENTA 13
#define CYAN    11
#define BLANCO   15

void printLine(int length, char symbol);
void color(int color);
void menu();

int main()
{
    int opc;
    char listadoFile[] = "listado.bin";
    int loop = 1;
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
    printf("||=====================================================||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf("             GESTOR DE STOCK        v0.1             ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||_____________________________________________________||\n");
    printf("||                                                     ||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf(" 1. MOSTRAR PRODUCTOS ORDENADOS POR ID               ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf(" 2. MOSTRAR PRODUCTOS ORDENADOS POR NOMBRE           ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf(" 3. AGREGAR NUEVO PRODUCTO                           ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf(" 4. AGREGAR EXISTENCIAS DE PRODUCTO (ID)             ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(BLANCO);
    printf(" 5. CREAR CARRITO DE SALIDA DE PRODUCTOS             ");
    color(CYAN);
    printf("||\n");
    printf("||                                                     ||\n");
    printf("||");
    color(ROJO);
    printf(" 6. SALIR                                            ");
    color(CYAN);
    printf("||\n"); /**AGREGAR MAS OPCIONES ACÁ */
    printf("||                                                     ||\n");
    printf("||_____________________________________________________||");
    printf("\n\n  Ingrese su opcion: ");
    color(BLANCO);
}

void color(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


