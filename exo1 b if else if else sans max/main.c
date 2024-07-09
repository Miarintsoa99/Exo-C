#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a , b , c ,max ;
    printf("a : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    printf("c : ");
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("La valeur max est %d",a );
        }
        else {
            printf("La valeur max est %d",c );
        }
    }
    else {
    if (b>c){
            printf("La valeur max est %d",b );
        }
        else {
            printf("La valeur max est %d",c );
        }
    }
    return 0 ;
}
