#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[50][50], B[50][50], C[50][50];
    int i, j, k, liga, cola, ligb, colb;

    printf("\n Matrice A");
    printf("\n Nombre de lignes de A = ");
    scanf("%d", &liga);
    printf("\n Nombre de colonnes de A = ");
    scanf("%d", &cola);

    printf("\n Matrice B");
    printf("\n Nombre de lignes de B = ");
    scanf("%d", &ligb);
    printf("\n Nombre de colonnes de B = ");
    scanf("%d", &colb);

    // Vérification des dimensions pour la multiplication
    if (cola != ligb) {
        printf("\n Erreur : Le nombre de colonnes de A doit être égal au nombre de lignes de B pour effectuer la multiplication.\n");
        return 0;
    }

    // Saisie des éléments de la matrice A
    printf("\n\n");
    for (i = 0; i < liga; i++) {
        for (j = 0; j < cola; j++) {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie des éléments de la matrice B
    printf("\n\n");
    for (i = 0; i < ligb; i++) {
        for (j = 0; j < colb; j++) {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Calcul de la multiplication des matrices
    for (i = 0; i < liga; i++) {
        for (j = 0; j < colb; j++) {
            C[i][j] = 0;
            for (k = 0; k < cola; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("\n\nRésultat de la multiplication :\n");
    for (i = 0; i < liga; i++) {
        for (j = 0; j < colb; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

