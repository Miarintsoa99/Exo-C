#include <stdio.h>
#include <stdlib.h>
int tab[1000];
int n;
int  compare(int a,int b )
{
 if ((a+b)%2==0) return a-b;
 if (a%2 == 0 ) return -100;
 else
 {
     return 100;
 }
}
void echange(int ind1,int ind2){
    int temp ;
    temp = ind1;
    ind1 = ind2;
    ind2 = ind1;
}
void ajout (int val){
    int i;
    tab[++n]= val ;
    i=n;
    while ((i>1)&&(compare(tab[i],tab[i/2])<0)){
        echange(i,i/2);
        i=i/2;
    }
}
int lecture (){
  return tab[1];
}
int extraction ()
{
    int i,k,out ;
    out = tab[1];
    echange(1,n);
    n--;
    i=1;
    while (2*i<=n){
        k=2*i;
        if ((k+1<=n)&&(compare(tab[k+1],tab[k])<0))
            k++;
        if (compare(tab[i],tab[k])) break;
            echange(i,k);
            i=k;
    }
    return out ;
}
void saisie()
{
    int i;
    printf("Entrer le nombre = ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf(" tab[%d] =" , i);
        scanf("%d",&tab[i]);
    }
}
void affichage ()
{
    int i;
    for(i=1;i<n;i++){
        printf("tab[%d] = %d\n ",i , tab[i]);
    }
}
void tri_par_tas(){
   int m,i ;
   m=n;
   for (i=0;n<m;){
    ajout(tab[n+1]);
   }
   while (n>1)
      extraction();
   n=m;
}
int main()
{
    saisie();
    tri_par_tas();
    printf("---AFFICHAGE---\n");
    affichage();

}
