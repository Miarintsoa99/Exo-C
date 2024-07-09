#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,som,prod,moy,n ;
    do{
        printf("Entrer un entier >0 : ");
        scanf("%d",&n);
    }
    while (n<=0);
    /*
    //for
    for (i=1,som=0,prod=1;i<=n;i++)
    {
        som+=i;
        prod*=i;
    }
    printf("\n somme=%d\n",som);
    printf("\n produit=%d\n",prod);
    printf("\n moyenne=%.2f\n",(float)som/n);
    */

    // while
    i=1;
    som=0;
    prod=1;
    while(i<=n)
    {
        som+=i;
        prod*=i;
        i++;
    }
    printf("\n somme=%d\n",som);
    printf("\n produit=%d\n",prod);
    printf("\n moyenne=%.2f\n",(float)som/n);

    return 0;
}
