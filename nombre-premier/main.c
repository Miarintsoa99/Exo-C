#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cpt=0,i ;
    do {
        printf("\n Entrer un nombre = ");
        scanf("%d",&n);
    }while(n<0);
    for(i=2;i<=(n/2);i++)
    if (n%i==0){
        cpt++;
        break;
    }
    if (cpt==0)
        printf(" %d est un nombre premier\n",n);
    else{
        printf(" %d n'est pas un nbr premier, ses diviseurs sont: \n",n);
        for (i=1;i<=n;i++)
        if (n%i==0){
            printf("%4d",i);
        }
    }

    return 0;
}
