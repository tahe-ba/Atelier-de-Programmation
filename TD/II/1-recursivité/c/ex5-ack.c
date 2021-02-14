#include <stdio.h>
 int ack(int m, int n) {

  if (m == 0)
      return n + 1;
  else
      if (n == 0)
          return ack (m - 1, 1);
      else
          return ack (m - 1, ack (m, n - 1));
}
void main (){
    int x,y;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    printf("le ackerman de %d et %d et %d\n",x,y,ack(x,y));
}