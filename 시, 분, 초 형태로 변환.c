#include <stdio.h>

struct time { 
int inputSec; //입력받은 초 시 
int Hour;  //시
int Min; //분
int Sec; //초
}; 

void convert(int inputSec); //시간을 계산하는 함수
struct time t;

int main(void) {
  printf("초를 입력하세요: ");
  scanf("%d", &t.inputSec);
  
  convert(t.inputSec);
  return 0;
}

void convert(int inputSec)
{
  t.Hour=inputSec/3600;
  inputSec%=3600;
  t.Min=inputSec/60;
  inputSec%=60;
  
  printf("[%d시:%d분:%d초]", t.Hour, t.Min, inputSec);
}