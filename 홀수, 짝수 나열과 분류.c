#include <stdio.h>

//홀수는 앞에서부터, 짝수는 뒤에서부터 채워나가기 함수
void Change(int *n, int *n2){
  int count=0, i=0, j=9;

  while(i<j)
  {
    if(n[count]%2==1){
      n2[i]=n[count];
      i++;
    }
    else {
      n2[j]=n[count];
      j--;
    }
    count++;
  }
}

void One(int *num){
  printf("홀수 입력: ");

  for(int i=0; i<10; i++)
  {
    if(num[i]%2==1) printf("%d ", num[i]);
  }

  printf("\n");
}

void Two(int *num){
  printf("짝수 입력: ");

  for(int i=0; i<10; i++)
    {
      if(num[i]%2==0) printf("%d ", num[i]);
    }

  printf("\n");
}

int main(){
  int n[10];
  int n2[10];

  printf("Enter number of 10 : ");

  for(int i=0; i<10; i++){
    scanf(" %d", &n[i]);  
  }

  //One(n);
  //Two(n);

  Change(n, n2);

  printf("배열 요소의 출력 : ");
  for(int i=0; i<10; i++){
    printf("%d ", n2[i]);
  }

  return 0;
}