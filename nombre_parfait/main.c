#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,som ;
    do {
    printf(" Entrez un nombre : ");
    scanf("%d",&n);
    }while (n<=0);
    som = 0;
    for (i=1;i<n;){
        if(n%i==0){
            som+=i;
        }
        i+=1;
    }
    if (som==n){
        printf("nombre parfait");
    }
    else {
        printf("nombre pas parfait;");
    }


     return 0;
}
