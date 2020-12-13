#include<stdio.h>
void main(){
int t[100];
int i,n,temp;

//size array input
  do {
    printf("taille :");
    scanf("%d", & n);
  } while (!(n >= 1));

// array input
for (i = 1; i <=n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & t[i]);
}
//inversion 
i=1;
      while(i<n/2)
      {
         temp = t[i];
         t[i]=t[n-i];
         t[n-i]=temp;
         i++;
      }
      
//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}
