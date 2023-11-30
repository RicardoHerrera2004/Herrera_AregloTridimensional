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

    for (int i = 1; i < a; i++) // La variable de i se inicializa con 1 porque ya se va a usar una matriz fija al final llena de 1
    // El primer for para ver cuantas matrices se va a utilizar
    {
        printf("\n Matriz %d", i);
        for (int j = 0; j < b; j++)
        // Segundo for para ver las filas de las matrices
        {
            printf("\n");
            for (int k = 0; k < c; k++)
            // Ultimo for para ver las columnas de las matrices
            {
                matriz[j][k] = 0;
                // Se llena las matrices de 0
                printf("%d \t", matriz[j][k]);
                // Se imprime las matrices
            }
        }
    }

    printf("\n Matriz %d", a);
    // Se crea un ultimo for para la ultima matriz llena de 1
    for (int j = 0; j < b; j++)
    {
        printf("\n");
        for (int k = 0; k < c; k++)
        {
            matriz[j][k] = 1;
            // Se llena de unos la matriz
            printf("%d \t", matriz[j][k]);
            // Se imprime la matriz de 1 al final
        }
    }

    return 0;
}