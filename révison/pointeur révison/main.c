#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tab[50];
   int *p1,*p2;
   int n , x ;
   do
   {
       printf("\n Entrez la dimension du tableau = ");
       scanf("%d",&n);
   }
   while (n<0 || n>50);
   // création du tableau
   for (p1 = tab ; p1< tab + n ; p1++)
   {
       printf(" tab[%d] = " , p1-tab);
       scanf("%d",p1);
   }

   // ranger en ordre croissant
   int temp ;
   for (p1 = tab ; p1 < tab + n ; p1++)
   {
       for (p2 = p1 + 1 ; p2 < tab + n ; p2++ )
       {
           if (*p1 > * p2 )
           {
               temp = *p1 ;
               *p1  = *p2 ;
               *p2  = temp ;

           }
       }
   }
   //  affichage
   printf ("\n");
   for( p1 = tab ; p1 < tab+n ; p1++ )
   {
       printf("%5d",*p1);
   }

   // som

   int som ;
   for (p1 = tab ; p1 < tab + n ; p1++ )
   {
       som +=*p1 ;
   }
   printf("\n la somme du tableau est de %d", som);

   // suppression éléments

   printf("\n Entrer la valeur àasupprimer = ");
   scanf("%d",&x);

   for ( p1 = p2 = tab ; p1 < tab + n ; p1++ )
   {
       *p2 = *p1 ;
       if (*p1 != x )
           p2++ ;

   }
    // affichage
    printf("\n Le tableau apres suppression de %d \n\n", x);
    for (p1 = tab; p1 < p2; p1++)
    {
        printf("%5d", *p1);
    }


   return 0;
}
