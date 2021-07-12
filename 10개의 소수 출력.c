#include <stdio.h>

int main(){
  int i=2;
  int total=0;
  int count=0;

  while(total<10){
    for(int j=1; j<=i; j++)
    {
      if(i%j==0) count++;
    }
    if(count==2){
      printf("%d ", i);
      total++;
    }

    i++;
    count=0;
  }
  
  return 0;
}