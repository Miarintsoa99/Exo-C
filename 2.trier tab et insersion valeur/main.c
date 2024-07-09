#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50];
    int i,j,n,temp;
    do{
        printf("\n Entrer la dimension du tableau (max:50) ");
        scanf("%d",&n);
    }while(n<=0 || n>50) ;
    for (i=0;i<n;i++){
        printf(" tab[%d] = ",i);
        scanf("%d",tab+i);
    }

    printf("\n\n Le tablaeu est = ");
    for (i=0;i<n;i++){
        printf("%5d",tab[i]);
    }
    for (i=0;i<n;i++){
        for (j=i+1;j<n;j++) {
        if (tab[i]>tab[j]){
            temp = tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
             }
          }
    }
    printf("\n\n Tableau trier = ");
    for (i = 0; i < n; i++) {
        printf("%5d ", tab[i]);
    }
    int nouvelleValeur;
    printf("\n\n Entrer une nouvelle valeur : ");
    scanf("%d", &nouvelleValeur);

    if (n < 50) {
        tab[n] = nouvelleValeur;
        n++;
        printf("\n Nouvelle valeur inseree avec succes !");
    } else {
        printf("\n Impossible d'inserer une nouvelle valeur. Le tableau est deja plein.");
    }

    printf("\n\n Le tableau est = ");

    for (i = 0; i < n; i++) {
        printf("%5d", tab[i]);
    }
    return 0;
}
