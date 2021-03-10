#include <stdio.h>
//#define ncase 100

void main() {
  //var
  int n, i,pair=0,impair=0;
  int T[100];
 
  //size array input
  do {
    printf("taille :");
    scanf("%d", & n);
  } while (!(n >= 1));

  // array input
  for (i = 0; i < n; i++) {
    printf("element[%d]:", i);
    scanf("%d", & T[i]);
  }


for(i=0;i<n;i++){
if((T[i]%2)==0){
    pair++;
    }
else{
    impair++;
    }
}
printf("il y a %d element pair\n",pair);
printf("il y a %d element impaire\n",impair);
}