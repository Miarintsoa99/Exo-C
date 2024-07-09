#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y,res ;
    printf("\n PGCD a et b ");
    do {
        printf("\n a = ");
        scanf("%d",&a);
    }while (a<0);
    do {
        printf("\n b = ");
        scanf("%d",&b);
    }while (b<0);
    // x et y akana anle valeur @affichage
    x=a;
    y=b;
    do {
        res = a%b ;
        if (res!=0){
            a=b;
            b=res;
        }
    }
    while (res!=0);
    printf("\n PGCD (%d , %d)= %d",x,y,b);
    return 0;
}
