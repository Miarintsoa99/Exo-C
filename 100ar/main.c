#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,j,k,cpt=0 ;
    for (i=0;i<=5;i++){
        for (j=0;j<=10;j++){
            for (k=0;k<=20;k++){
                x=20*i+10*j+5*k;
                if (x==100){
                    printf(" %d*20ar + %d*10ar + %d*5ar \n",i,j,k);
                    cpt++;
                }
            }
        }
    }
    printf("Le nombre de combinaison possible est de %d ",cpt);
    return 0;
}
