#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max ;
    printf("a : ");
    scanf("%d",&a);

    printf("b : ");
    scanf("%d",&b);

    printf("c : ");
    scanf("%d",&c);

    max=(a>b)?a:b;
    max=(c>=max)?c:max;
    printf("la valeur max %d",max);

    return 0;
}
