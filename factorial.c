#include <stdio.h>

int factorial(int n)
{
  if(n==0) return 0;
  else if(n==1) return 1;
  else return n*factorial(n-1);
}

int main(){
  int n;

  printf("Enter a num : ");
  scanf("%d", &n);

  int result=factorial(n);

  printf("Result is %d", result);

  return 0;
}