#include <stdio.h>
#include <stdlib.h>

float moyenne(int a, int b)
{
    float moy;
    moy = (float)(a + b) / 2; // Utilisation d'une division en virgule flottante
    return moy;
}

int entre(void)
{
    int nbr;
    printf("Entre un nombre : ");
    scanf("%d", &nbr);
    return nbr;
}

int main()
{
    int n1, n2;
    n1 = entre();
    n2 = entre();
    printf("La moyenne arithmetique de %d et %d est : %.2f", n1, n2, moyenne(n1, n2));
    return 0;
}
