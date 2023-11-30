#include <stdio.h>

int main()
{

    int a, b, c;
    // Se define las dimensionas de la matriz como enteros

    printf("Ingrese el numero de matrices que va a ingresar: ");
    scanf("%d", &a);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &b);
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &c);
    // Se pide al usuario las dimensiones de la matriz tridimensional

    int matriz[b][c];

    for (int i = 1; i < a; i++)
    {
        printf("\n Matriz %d", i);
        for (int j = 0; j < b; j++)
        {
            printf("\n");
            for (int k = 0; k < c; k++)
            {
                matriz[j][k] = 0;
                printf("%d \t", matriz[j][k]);
            }
        }
    }

    printf("\n Matriz %d", a);
    for (int j = 0; j < b; j++)
    {
        printf("\n");
        for (int k = 0; k < c; k++)
        {
            matriz[j][k] = 1;
            printf("%d \t", matriz[j][k]);
        }
    }

    return 0;
}