#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c , max ;
    printf("a : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    printf("c : ");
    scanf("%d",&c);

    if (a>b) {
        max = a ;
    }
    else {
        max = b ;
    }
    if (c>=max)
    {
        max = c ;
    }
    printf("La valeur max est %d ",max);
    return 0 ;

}
