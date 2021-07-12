#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// RAND_MAX : rand의 최대값
// rand()%10+1 : 0~9까지 랜던값에 +1 -> 1~10까지
// srand(time(NULL)) (seed값 초기화) : 1970년 1월 1일 이후 경과된 시간(초)

int main(void) {
  
  srand(time(NULL)); 
  
  printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);

  for(int i=0; i<5; i++) printf("난수 출력: %d \n", rand()%10+1);

  return 0;

}