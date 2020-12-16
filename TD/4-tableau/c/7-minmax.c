#include<stdio.h>
void main(){
int t[100];
int i,n,max,min;

//size array input
  do {
    printf("taille du tableau :");
    scanf("%d", & n);
  } while (!(n >= 1));

// array input
  for (i = 1; i <=n; i++) {
      printf("element[%d]:", i);
      scanf("%d", & t[i]);
  }

for (i = 1; i <=n; i++) {
    if ((t[i])>(t[1])){
        max=i;
    } else {
        min=i;
    }
}
printf("t[%d] contient la valeur maximal du tableau \n",max);
printf("t[%d] contient la valeur minimal du tableau \n",min);

}