#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,P[20][20];
    do {
        printf("\n Entrer le degree du triangle de pascal = ");
        scanf("%d",&n);
    }while (n>13);
    for (i=0;i<n;i++){
        P[i][0]=1;// Le premier élément de chaque ligne est tjrs 1
        P[i][i]=1;// Le dernier élément de chaque ligne est tjrs 1
        for(j=1;j<i;j++){
            P[i][j] = P[i-1][j-1] + P[i-1][j];
        }
    }
    // Affichage du triangle de Pascal
    for (i=0; i<n;i++) {
        for (j=0; j<=i;j++) {
            printf("%4d ",P[i][j]);
        }
        printf("\n");
    }
    return 0;
}
