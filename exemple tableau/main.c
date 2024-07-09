#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab [50];
    int i,n;

    // saisie dimension
    printf(" Entrer la dimension : ");
    scanf("%d",&n);

    //inserion un à un des element du tableau
    for (i=0;i<n;i++){
        printf("tab[%d]: ",i+1);
        scanf("%d",tab+i);
    }

    // affichage tableau
    for (i=0;i<n;i++){
        printf("%5d",tab[i]);
    }
    return 0;
}
