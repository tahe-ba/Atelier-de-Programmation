#include <stdio.h>
#include <string.h>
void main() {
  char str[100];
  int i, j, s;
  printf("Saisir la chaine:");
  scanf("%s", str);
  s=1;
  for(i=0 , j=strlen(str)-1  ;   i<j   ;  i++ , j--){
    if (str[i] != str[j]) {
      s=0;
    } else {
      s=1;
    }
  }
  if(s==1) printf("%s est palindrome\n",str);
  else printf("%s non palindrome\n",str);
}