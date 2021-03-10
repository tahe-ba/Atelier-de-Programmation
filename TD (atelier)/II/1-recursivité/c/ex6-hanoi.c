#include <stdio.h>

void hanoi(char dep, char dest, char temp, int n)
{
	if(n==1)
	{
		printf ("deplacez %c vers %c\n",dep,dest);
	}
	else
	{
		hanoi( dep, temp, dest, n-1);	
		hanoi( dep, dest, temp, 1);	
		hanoi(temp, dest,  dep, n-1);
	}
}

void main()
{
	int n;
    printf("Dans ce jeux il y a 3 tours qu'on va appeler a b c\nnombre de disque: ");
    scanf("%d",&n);
	hanoi('a','c','b',n);
}