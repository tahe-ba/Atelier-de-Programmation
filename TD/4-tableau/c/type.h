#include<stdio.h>
void main(){
int t[100];
int i,n;

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
//print array
printf("=> TABLEAU <=\n");
for(i=1;i<=n;i++){
    printf("%d\t", t[i]);
}
printf("\n");
}
}