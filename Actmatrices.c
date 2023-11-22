#include <stdio.h>

int main (void)
{
    int a,b;
    printf("Ingrese el tamanio de la fila\n");
    scanf("%d", &a);
    printf("Ingrese el tamanio de la columna\n");
    scanf("%d", &b);

    int matriz[a][b];
    for (int i = 0; i < a; i++)
    {
       for (int j = 0; j < b; j++)
       {
        matriz [i][j] = 0;
        
        if (i == j)
        {
            matriz[i][j] = 1;
        }
        
       }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}