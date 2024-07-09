#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , fact , i ;
    do {
    printf("Entrer un nombre = ");
    scanf("%d",&n);
    }while(n<0);

    /* //for
    for (i=1,fact=1;i<=n;i++){
        fact*=i;
    }
    printf("\n %d!= %d",n,fact);
    */

    //while
    i=1;
    fact=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("\n %d!= %d",n,fact);
    return 0;
}
