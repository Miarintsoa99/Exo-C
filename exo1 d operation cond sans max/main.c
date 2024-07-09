#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c ;
    printf("a : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    printf("c : ");
    scanf("%d",&c);

    printf("La valeur maximale est %d",
(a>((b>c)?b:c)) ? a : ((b>c)?a:c));



    return 0;
}
