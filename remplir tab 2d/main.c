#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50][50];
    int i,j,l,c,som ;
    do{
       printf("\n Entrer le nombres de lignes(max=50)= ");
       scanf("%d",&l);
       printf("\n Entrer le nombres de colonnes (max=50)= ");
       scanf("%d",&c);
    }while (l>50 || c>50);
    // insertion
    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            printf("tab[%d][%d] = ",i+1,j+1);
            scanf("%d",&tab[i][j]);
        }
    }
    // affichage
    printf("\n Le tableau est de : \n\n");
    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            printf("%4d",tab[i][j]);
        }
    printf("\n");
    }

    // somme de chaque ligne
     for (i=0;i<l;i++){
        som=0;
        for (j=0;j<c;j++){
            som+= tab[i][j];
        }
        printf("\n\n Somme des elements de la ligne %d : %d\n", i+1, som);
     }

     //somme de chaque colonne
     for (j=0;j<c;j++){
        som=0;
        for (i=0;i<l;i++){
            som += tab[i][j];
        }
        printf("\n\n Somme des elements de la colonne %d : %d\n",j+1,som);
     }

     // somme total
     som = 0 ;
     for(i=0;i<l;i++){
        for (j=0;j<c;j++){
            som += tab[i][j];
        }
     }
     printf("\n\n La somme total du tab est :%d",som );
    return 0;
}
