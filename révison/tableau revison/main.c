#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50],pos[50],neg[50];
    int n ;
    int i,j,k;
    int min ,max ;
    do
    {
        printf("Entrer le dimension du tableau : ");
        scanf("%d",&n);
    }
    while (n>50 || n<=0 );
    // insertion
    for (i=0;i<n;i++)
    {
        printf("tab[%d] = ",i+1 );
        scanf("%d",tab+i);
    }
    // affichage
    for (i=0;i<n;i++)
    {
        printf("%5d",tab[i]);
    }

    // calcul somme
    int som = 0 ;
    for (i=0;i<n;i++)
    {
        som += tab[i];
    }
    printf("\n La somme des element du tableau est %d",som );

    // tableau negatif
    for (i=j=k=0;i<n;i++)
    {
        if (tab[i]>0)
        {
            pos[j]=tab[i];
            j++;
        }
        if (tab[i]<0)
        {
            neg[k]=tab[i];
            k++;
        }
    }

    // affichage tableau neg et pos
    printf("\n\n Tableau pos = ");
    for(i=0;i<j;i++)
        printf("%5d",pos[i]);
    printf("\n\n Tableau neg = ");
    for (i=0;i<k;i++)
        printf("%5d",neg[i]);

    // suppression de 0
    for (i=j=0;i<n;i++)
    {
        tab[j]=tab[i];
        if (tab[i]!=0)
            j++;
    }
    printf("\n\n Le tableau tab sans 0 = ");
    for(i=0; i<j; i++)
    printf("%5d", tab [i]);
     for(i=0, max=min=0; i<n; i++){
     if(tab[i]>tab[max])
     max=i;
     if(tab[i]<tab[min])
     min=i;
     }
     printf("\n\n La valeur maximale est: %d , position: ", tab[max]);
     for(i=0; i<n; i++)
     if(tab[max]==tab[i])
     printf("%5d", i);
     printf("\n\n La valeur minimale est: %d , position: ", tab[min]);
     for(i=0; i<n; i++)
     if(tab[min]==tab[i])
     printf("%5d", i);
     printf("\n");

    return 0;
}
