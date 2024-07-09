#include <stdio.h>

void saisietab (int tab [], int n )
{
    int i
    do
    {
        printf("la dimension du tableau = ");*
        scanf("%d",&n);
    }
    while (n<0 || n>50 );

    for (i=0; i < n ; i++ )
    {
        printf("tab[%d] = " , i+1);
        scanf("%d", &tab[i]);
    }
}

void affiche( int tab , int n )
{
    int i

    for (i=0 ; i < n  )
}
