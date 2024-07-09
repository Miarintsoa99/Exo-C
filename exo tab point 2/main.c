#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[50],pos[50],neg[50];
    int n ;
    int *p1,*p2;
    int max,min ;
    p1=tab ;
    do {
    printf("\n\n Entrer la dimension du tableau = ");
    scanf("%d",&n);
    }while (n>50 || n <=0 );

    // insertion
    printf("\n\n");
    for (p1=tab ; p1<tab+n;p1++){
        printf(" tab[%d] = ",p1-tab);
        scanf("%d",p1);
    }
    // affichage
    printf("\n\n Tableau initial = ");
    for (p1=tab;p1<tab+n;p1++){
        printf("%5d",*p1);
    }

    /* // affichage inverse
    printf("\n\n ------Tableau inverse------\n\n");
    for (p1=tab+n-1;p1>=tab;p1--){
        printf("%5d",*p1);
    } */

    // somme
    int som ;
    som=0 ;
    for (p1=tab ;p1<tab+n;p1++){
        som += *p1 ;
        }
    printf("\n\n La somme des elements du tableau = %d ",som);



    // occurences de 0 ;
    printf("\n\n Le tableau sans Zero 0 = ");
    for(p1=p2=tab;p1<tab+n;p1++){
        *p2 = *p1;
        if (*p1 != 0){
           p2++;
        }
    }
    for(p1=tab;p1<p2;p1++){
        printf("%5d",*p1);
     }
     // tableau pos et neg
     int cpt;
     for (p1=tab,p2=pos,cpt=0;p1<tab+n;p1++){
        if (*p1 > 0 ){
            *p2 = *p1 ;
            p2++ ;
            cpt++;
        }
     }
     printf("\n\n Tableau positif = ");
     for (p1=pos;p1<pos+cpt;p1++){
        printf("%5d",*p1);
     }

     for(p1=tab,p2=neg,cpt=0;p1<tab+n;p1++){
        if (*p1 < 0 ){
            *p2 = *p1 ;
            p2++;
            cpt++;
        }
     }
     printf("\n\n Tableau negatif  = ");
     for(p1=neg;p1<neg+cpt;p1++){
        printf("%5d",*p1);
     }

     // min et max
     int pmax,pmin;
     pmax=0;
     pmin=0;
     max=tab[0];
     for(p1=tab;p1<tab+n;p1++){
        if (*p1>max){
            max=*p1;
            pmax=p1-tab;
        }
     }
     min=tab[0];
     for(p1=tab;p1<tab+n;p1++){
        if  (*p1<min){
            min=*p1;
            pmin=p1-tab;
     }
     }
     printf("\n\n La valeur max est %d , position numero %d du tableau",max,pmax);
     printf("\n\n La valeur min est %d , position numero %d du tableau",min,pmin);

     // ajouter des valeurs

    int valeur;
    printf("\n\n Entrez une valeur a ajouter dans le tableau : ");
    scanf("%d", &valeur);

    // Recherche de la position d'insertion
  /* p1 = tab;
    p2 = tab + n;
    while (*p1 < valeur && p1 < p2) {
        p1++;
    } */

    // Décaler les éléments vers la droite pour faire de la place
    p2 = tab + n;
    while (p2 > p1) {
        *p2 = *(p2 - 1);
        p2--;
    }

    // Insérer la valeur à la position trouvée
    *p1 = valeur;

    // Augmenter la taille du tableau
    n++;

    // affichage avec la valeur ajoutée
    printf("\n\n Tableau avec la valeur ajoutee = ");
    for (p1 = tab; p1 < tab + n; p1++) {
        printf("%5d", *p1);
    }

    // Tri par ordre croissant
    for (p1 = tab; p1 < tab + n - 1; p1++) {
        for (p2 = p1 + 1; p2 < tab + n; p2++) {
            if (*p1 > *p2) {
                int temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }

     // affichage trié
    printf("\n\n Tableau trie = ");
    for (p1 = tab; p1 < tab + n; p1++) {
        printf("%5d", *p1);
    }

    return 0;
}
