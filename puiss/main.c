#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , p , puiss ,i  ;
    printf("\n n^p");
    do {
        printf("\n Entrer n = " );
        scanf("%d",&n);
    }while (n<0);
    do {
        printf("\n Entrer p = ");
        scanf("%d",&p);
    }while (n<0);
    for(i=1,puiss =1;i<=p;i++){
        puiss*=n;
    }
    printf("\n %d^%d = %d",n,p,puiss);
    return 0;
}
