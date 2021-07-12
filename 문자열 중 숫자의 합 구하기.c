#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[30];
  int sum=0;
  int num=0;

  printf("문자열을 입력하시오 : ");
  scanf(" %s", str);

  for(int i=0; i<strlen(str); i++){
    if(str[i]>47 && str[i]<58){
      num=((int)str[i])-48;
      sum+=num;

      printf("%c \n", str[i]);
    }
    else continue;
  }
  
  printf("SUM IS %d", sum);

  return 0;
}