#include <stdio.h>
#include <stdlib.h>
int entrer(void)
{
    int nbr ;
    printf("Entrer nombre = ");
    scanf("%d",&nbr);
    return nbr;
}
int max (int a , int b)
{
    return (a>b)? a : b ;
}
int min (int a , int b)
{
    return (a<b)? a : b ;
}
int main()
{
    int num1 , num2 , num3 ,num4;
    num1 = entrer();
    num2 = entrer();
    num3 = entrer();
    num4 = entrer();

   // int minimun ;
   // int  maximum ;
   //  minimun = min(min(min(num1,num2),num3),num4);
    // maximum = max(max(max(num1,num2),num3),num4);

    printf("Le minimum parmi les quatre nombres est : %d\n", min(min(min(num1,num2),num3),num4));
    printf("Le maximum parmi les quatre nombres est : %d\n", max(max(max(num1,num2),num3),num4));

    return 0;
}
