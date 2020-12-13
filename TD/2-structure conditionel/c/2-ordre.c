#include <stdio.h>
void main()
{
int a,b,c,e;
 
  printf("1er entier: ");
  scanf("%d", & a);
  printf("2eme entier: ");
  scanf("%d", & b);
  printf("3eme entier: ");
  scanf("%d", & c);
do
{
    if(a>b)
    {
        e=a;
        a=b;
        b=e;
    }
    else if(b>c)
    {
        e=b;
        b=c;
        c=e;
    }
}while(!((a<b)&&(a<c)&&(b<c)));
 
printf("Les nombres sont maintenant dans l'ordre croissant : %d %d %d\n", a, b, c);

}