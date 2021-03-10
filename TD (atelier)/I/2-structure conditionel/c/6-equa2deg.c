#include <stdio.h>
#include <math.h>
void main()
{
  int a,b,c;
  double d; /* delta */
  printf("veuillez entrer les valeurs pour a, b, et c : \n");
  printf("a=");
  scanf("%i", &A);
  printf("b=");
  scanf("%i", &B);
  printf("c=");
  scanf("%i", &C);
  printf("\n");

 /* Calcul du discriminant b^2-4ac */ 
  D = pow(B,2) - 4.0*A*C; 

 /* Distinction des différents cas */ 
  if (A==0 && B==0 && C==0) /* 0x = 0 */ 
    printf("Tout réel est une solution de cette équation.\n"); 
  else if (A==0 && B==0)  /* Contradiction: c # 0 et c = 0 */   
    printf("Cette équation ne possède pas de solutions.\n"); 
  else if (A==0) /* bx + c = 0 */  
     { 
       printf("La solution de cette équation du premier degré est :\n");  
       printf(" x = %.4f\n", (double)C/B); 
     } 
  else if (D<0)  /* b^2-4ac < 0 */  
 {
printf("Les solutions complexes de cette équation sont les suivantes :\n"); 
  printf("x1 = %.4f + i%.4f\n", (double)(-B),(double)(sqrt(-D)/(2*A))) ;  
  printf("x2 = %.4f + i%.4f\n", (double)(-B),(double)(-sqrt(-D)/(2*A))) ; 
 } 
  else if (D==0) /* b^2-4ac = 0 */  
     { 
       printf("Cette équation a une seule solution réelle :\n"); 
       printf(" x =  %.4f\n", (double)-B/(2*A)); 
     } 
  else /* b^2-4ac > 0 */  
     {  
       printf("Les solutions réelles de cette équation sont :\n"); 
       printf(" x1 = %.4f\n", (double)(-B+sqrt(D))/(2*A)); 
       printf(" x2 = %.4f\n", (double)(-B-sqrt(D))/(2*A)); 
     } 
}
