#include <stdio.h>
#include <string.h>

int main(void){
  char voca[100];
  char temp;

  printf("Enter String : ");
  scanf("%[^\n]s", voca);

  for(int i=0; i<strlen(voca)/2; i++){
    temp=voca[i];
    voca[i]=voca[(strlen(voca)-i)-1]; //-1은 '\0'를 제거하기 위함
    voca[(strlen(voca)-i)-1]=temp;
  }

  printf("뒤집한 문자열 : %s \n", voca);

  return 0;
}