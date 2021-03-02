#include<stdio.h>
unsigned long DB_It(unsigned short n)
{
    unsigned short n,q,ord,r;
    unsigned long s;

    n1=n;
    s=0;
    ord=1;
    while(n1!=0)
    {
        r=n1%2;
        s=s+r*ord;
        n1=n1/2;
        ord=ord*10;
    }
    return s;
}

void DB_R(int n)
{
    int r;
    if(n>0)
    {
        r=n%2;
        DB_R(n/2);
        printf("%d",r);
    }

}

void main()
{
    int a;

    do
    {
        printf("Saisir un entier positfi ou nul :");
        scanf("%d",&a);
    }while(!(a>=0));
    DB_R(a);
}
