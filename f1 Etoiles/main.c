#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j ;
    do {
        printf(" Entrez un nombre n>=0: ");
        scanf("%d",&n);
    }while(n<0);
    for (i=1;i<=n;i++){
        for (j=0;j<=n-i;j++)
            printf(" ");
        for (j=0;j<i*2-1;j++)
            printf("*");
            printf("\n");
    }
    return 0;
}
