#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,c,r ;
    do {
        printf("Entrez un nombre cube n>100 = ");
        scanf("%d",&n);
    } while (n<100);
    for (i=1;i<n-1;i++){
    a=(i/100);
    b=(i%100)/10;
    c=(i%10)%10;
    r=a*a*a+b*b*b+c*c*c ;
      if (i==r);
      {
          printf("%d",i);
      }
   }
    return 0;
}
