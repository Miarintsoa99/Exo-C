#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B, C , var ;

    printf("A = ");
    scanf("%d",&A);
    printf("B = ");
    scanf("%d",&B);
    printf("C = ");
    scanf("%d",&C);

    if (A<B){
        var = A ;
        A   = B ;
        B   = var ;
    }
    if (A<C){
        var = A ;
        A   = C ;
        C   = var ;
    }
    if (B<C){
        var = B ;
        B   = C ;
        C   = var ;
    }
    printf("Resulat aprés echange successif et tri \t %d  \t %d  \t %d",A,B,C);
    return 0;
}
