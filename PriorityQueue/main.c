// Priority Queue in C

#include <stdio.h>
#include <stdlib.h>

int tab[1000];
int n;

// compare a et b
// retourne <0 si a est prioritaire par rapport à b
// retourne =0 si a==b
// retourne >0 si b est prioritaire par rapport à a

/* int compare(int a, int b)
{
    if ((a+b)%2==0) return a-b;
    // parité tsy mitovy
    if (a%2==0) return -100 ;
    else {
    return +100;
    }
}
*/
int estPremier(int nbr){
    if (nbr<=1)
              return 1;
    for (int i=2;i<=nbr/2;i++) {
            if (nbr%i==0){
                return 0 ;
            }
            else
                return 1 ;
    }
}
int compare(int a, int b){
    int Apremier = estPremier(a);
    int Bpremier = estPremier(b);
    if (Apremier && !Bpremier )
        return -1;
    if (!Apremier && Bpremier)
        return 1 ;
    else
        return a-b;
}


void echange(int ind1, int ind2)
{
    int temp;
    temp = tab[ind1];
    tab[ind1] = tab[ind2];
    tab[ind2] = temp;
}

void ajout(int val) // O(log(n))
{
    int i;
    tab[++n] = val;
    i = n;
    while ((i>1)&&(compare(tab[i],tab[i/2])<0))
    {
        echange(i,i/2);
        i = i/2;
    }
}

int lecture() // O(1)
{
    return tab[1];
}

int extraction() // O(log(n))
{
    int i, k, out;
    out = tab[1];
    echange(1, n);
    n--;
    i = 1;
    while (2*i<=n)
    {
        k = 2*i;
        if ((k+1<=n)&&(compare(tab[k+1],tab[k])<0)) k++;
        if (compare(tab[i],tab[k])<0) break;
        echange(i, k);
        i = k;
    }
    return out;
}

void saisie()
{
    int i;
    printf("entrer le nombre de nombres : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("tab[%d] = ",i);
        scanf("%d",&tab[i]);
    }
}

void affichage()
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("tab[%d] = %d\n",i, tab[i]);
    }
}

void tri_par_tas() // O(nlog(n))
{
    int m;
    //tri par tas
    //entassement
    m = n;
    for(n=0;n<m;)
        ajout(tab[n+1]);
    //détassement
    while (n>1)
        extraction();
    n = m;

}


int main()
{
    saisie();
    tri_par_tas();
    printf("---- AFFICHAGE ----\n");
    affichage();
}
//SDA - ISPM
