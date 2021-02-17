#include <stdio.h>
#include <string.h>

int palindrome(char c[100],int i, int j) {
    if (j == i)
        return 0;
    else if(c[i] == c[j])
        return palindrome(c, ++i, --j);
    else
        return 1;
}

int palin(char arr[], int start, int end) {
   if (start >= end) {
      return 1;
   }
   if (arr[start] == arr[end]) {
      return palindrome(arr, start + 1, end - 1);
   } else {
      return 0;
   }
}
//probleme les mot ayant une longeur impaire

int check(char str[], int p){
    int len = strlen(str) - (p + 1);
    if (str[p] == str[len]){
        if (p + 1 == len || p == len)
            return 1;
        check(str, p + 1);
    }
    else
        return 0;
}

void main() {
    char chaine[100] ;
    printf("donner un mot:");
    scanf("%s",chaine);
    //if (palindrome(chaine,0,strlen(chaine)-1))
    if (check(chaine,0))
        printf("mot palinfrome\n");
    else 
        printf("mot non palinfrome\n");
}