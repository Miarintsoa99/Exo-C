#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , c ;
    float x1 , x2 , x0 , x , delta ;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    if (a!=0) {
        delta = (b*b)-4*a*c;
        if (delta>0){
            x1 = (-b+sqrt(delta))/2*a ;
            x2 = (-b+sqrt(delta))/2*a ;
            printf("x1 = %f",x1);
            printf("x2 = %f",x2);
        }
        else if (delta<0){
            printf("pas de solution");
        }
        else {
            x0 = -b/(2*a);
            printf("x0 = %f",x0);
        }
    }
    else if (b=0){
        if (c=0){
            printf("IS");
        }
        else {
            printf("Math error");
        }
    }
    else if (b!=0){
        if (c=0){
            printf("math error");
        }
        else {
            x = -c/b ;
            printf("x = %f",x);
        }
    }
    return 0;
}
