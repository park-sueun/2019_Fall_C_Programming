#include <stdio.h>
#include <ctype.h>

int main(){
  char a;

  printf("입력하시오. ");
  scanf(" %c", &a);

  if((int)a>64 && (int)a<91){ // 대문자 A:65 ~ Z:90 
    a=tolower(a);
    printf("a: %c\n", a);
  }
  else if((int)a>96 && (int)a<123){ // 소문자 a:97 ~ z:122
    a=toupper(a);
    printf("a: %c\n", a);
  } 
  else printf("잘못입력하셨습니다.\n");

  return 0;
}

//소문자-대문자=32


// 문자의 첫 단어를 대문자로 바꾸기

    printf("뒤집한 문자열 : %s \n", voca);

    printf("Enter String : ");
    scanf(" %[^\n]s", voca2);

  for(int i=0; i<strlen(voca2); i++){
    if(i==0) voca2[0]=toupper(voca2[0]);
    if(voca2[i]==' '){
      i++;
      voca2[i]=toupper(voca2[i]);
    } 
  }

  printf("첫문자를 대문자로 변경: %s\n", voca2);