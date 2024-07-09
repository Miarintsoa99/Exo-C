#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,soma,somb,i;
    do {
        printf("\n a = ");
        scanf("%d",&a);
        printf(" b = ");
        scanf("%d",&b);
    } while (a<0 || b<0 || a==b);
    soma=0;
    for(i=1;i<a;i++){
        if (a%i==0){
            soma+=i;
        }
    }
    somb=0;
    for(i=1;i<b;i++){
        if (b%i==0){
            somb+=i;
        }
    }
    if ((soma==b) && (somb==a)) {
        printf("%d et %d est un couple ami ", a,b);
    }
    else
    {
        printf("%d et %d n'est pas un couple ami",a,b);
    }

    return 0;
}
