#include <stdio.h>
void main ()
{
	float moy;
	do{
	printf("moyenne: ");
	scanf("%f", &moy);
    }while ((moy<0)||(moy>20));
    
	if ((moy>=16) && (moy<=20))
		printf("Tres bien\n");
	else if (moy>=14) 
		printf("Bien\n");
	else if (moy>=12)
		printf("Assez bien\n");
	else if (moy>=10) 
		printf("Passable\n");
	else 
		printf("Echec\n");
		
}