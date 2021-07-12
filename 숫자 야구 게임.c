#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void AnswerCompare(int *answer, int *my_answer, int *result);

int main(){
  int answer[3];
  int my_answer[3];
  int result[3]={0}; // 0:strike, 1:ball, 2:clear
  int count=1;
  
  srand(time(NULL));
  
  for(int i=0; i<3; i++){
    answer[i]=rand()%10; // 0~9까지의 숫자

    if(i==1 && (answer[0]==answer[1])) i--;
    else if(i==2 && ((answer[0]==answer[2]) || (answer[1]==answer[2]))) i--;
  }

  printf("Start Game!\n");

  while(1){
    printf("3개의 숫자 선택: ");
    scanf(" %d %d %d", &my_answer[0], &my_answer[1], &my_answer[2]);

    if((0<=my_answer[0] && my_answer[0]<=9) && (0<=my_answer[1] && my_answer[1]<=9) && (0<=my_answer[2] && my_answer[2]<=9)) {

      AnswerCompare(answer, my_answer, result);
  
      printf("%d번째 도전 결과: %dstrike, %dball !!!\n", count, result[0], result[1]);

      if(result[2]==1) break;

      count++;
    }
    
    else printf("잘못된 입력입니다.\n");

  }

  printf("\nGame Over!\n");

  return 0;
}

void AnswerCompare(int *answer, int *my_answer, int *result){

  int strikeCount=0, ballCount=0;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(answer[i]==my_answer[j]){
        if(i==j) strikeCount++;
        else ballCount++;
      }
    }
  }

  result[0]=strikeCount;
  result[1]=ballCount;

  if(strikeCount==3) result[2]=1;

}