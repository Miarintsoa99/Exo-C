#include <stdio.h>
#include <stdlib.h>
int binomiale(int q , int k ){
 int c = 1 ;
 for (int i=0 ; i<k ; i++ )
 {
     c *= (q-i);
     c /= (i+1);
 }
 return c ;
 }

 int triangleDePascale(int n)
 {
     for (int i=0 ; i<=n ; i++)
     {
         for (int j=0 ; j<=i ; j++)
         {
             printf("%5.d",binomiale(i,j));
         }
         printf("\n");
     }
 }
int main()
{
    int n;
    printf("Entrez le nombre de lignes du triangle de Pascal : ");
    scanf("%d", &n);
    triangleDePascale(n);
    return 0;
}
