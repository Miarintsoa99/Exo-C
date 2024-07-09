#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10,p=5,q=10,r;
    r= n== (p=q);
    printf("A: n=%2d\t p= %2d\t q= %d\t r= \%2d\n",n,p,q,r);
    n=p=q=5;
    n+=p+=q;
    printf("B: n=%2d\t p= %2d\t q= %d\t\n",n,p,q);
    q =n<p ? n++ : p++;
    printf("C: n=%2d\t p= %2d\t q= %d\t\n",n,p,q);
    q =n>p ? ++n : ++p;
    printf("D: n=%2d\t p= %2d\t q= %d\t\n",n,p,q);
    n=5;p=2;
    q= n++ == 6 && ++p == 3;
    printf("E: n=%2d\t p= %2d\t q= %d\t\n",n,p,q);
    n=5;p=2;
    q= ++n == 6 && p++ == 3;
    printf("F: n=%2d\t p= %2d\t q= %d\t\n",n,p,q);


    return 0;
}
