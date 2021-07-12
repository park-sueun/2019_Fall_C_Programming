#include <stdio.h>

void Sorting(int *n, int len){
  int temp=0;

  for(int i=0; i<len-1; i++)
  {
    for(int j=i+1; j<len; j++)
    {
      if(n[i]>n[j]) // '>'=오름차순, '<'=내림차순
      {
        temp=n[i];
        n[i]=n[j];
        n[j]=temp;
      }
    }
  }
}

int main(){
  int n[10];
  int len=sizeof(n)/sizeof(int);

  for(int i=0; i<len; i++)
  {
    printf("Enter a num: ");
    scanf("%d", &n[i]);
  }

  Sorting(n, len);
  
  for(int i=0; i<10; i++){
    printf("%d ", n[i]);
  }

  return 0;
}