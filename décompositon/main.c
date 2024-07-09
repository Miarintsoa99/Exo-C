#include <stdio.h>

int main() {
    int n, i;

    // Demande à l'utilisateur d'entrer le nombre entier
    printf(" Entrez un nombre entier (>= 2) : ");
    scanf("%d", &n);

    // Décomposition en facteurs premiers
    printf("\n Decomposition en facteurs premiers : ");
    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%5d", i);
            n = n / i;
        }
    }

   // printf("\n");

    return 0;
}
