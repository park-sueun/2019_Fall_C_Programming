#include <stdio.h>
#include <string.h>

int main(void){
  char voca[100];
  char temp;
  int count=0;

  printf("Enter String : ");
  scanf("%[^\n]s", voca);

  for(int i=0; i<strlen(voca)/2; i++){
    if(voca[i]==voca[(strlen(voca)-i)-1]) count++;
  }

  if(count==strlen(voca)/2) printf("회문 입니다.\n");
  else printf("회문이 아닙니다.\n");

  return 0;
}