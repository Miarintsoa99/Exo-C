#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[50][50];
    int i,j,l,c,dmax,temp;
    do{
       printf("\n Entrer le nombres de lignes(max=50)= ");
       scanf("%d",&l);
       printf("\n Entrer le nombres de colonnes (max=50)= ");
       scanf("%d",&c);
    }while (l>50 || c>50);
    // insertion
    for(i=0;i<l;i++){
        for (j=0;j<c;j++){
            printf("mat[%d][%d]= ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    // affichage
    printf("\n\n La martice est de = \n\n ");
    for (i=0;i<l;i++){
        for (j=0;j<c;j++){
            printf("%5d",mat[i][j]);
        }
       printf(" \n ");
    }
    // transpositon
    if (l>c){
        dmax=l;
    }
    else {
        dmax=c;
    }
    for(i=0;i<dmax;i++){
        for(j=0;j<i;j++){
            temp = mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    printf("\n\n La matrice transpose est = \n\n ");
    for (i=0;i<c;i++){
        for(j=0;j<l;j++){
            printf("%5d",mat[i][j]);
        }
      printf(" \n ");
    }
    return 0;
}
