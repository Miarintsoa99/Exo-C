#include <stdio.h>
#include <stdlib.h>
int nbrc(long n )
{
    int cpt = 0 ;
    while (n>0)
    {
        n /=  10 ;
        cpt ++ ;
    }
    return cpt ;
}

int main()
{
    int n ;
    printf("Entrer un long chiffre = ");
    scanf("%d",&n) ;
    int cpt ;
    cpt = nbrc(n);
    printf("\n%d est compose de %d chiffres ",n,cpt );

    return 0;
}
