#include <stdio.h>
#include <limits.h>

int Min(int *n, int arr_size)
{
  int min=INT_MAX;

  for(int i=0; i<arr_size; i++)
  {
    if(min>n[i]) min=n[i];
  }

  return min;
}

int Max(int *n, int arr_size)
{
  int max=INT_MIN;

  for(int i=0; i<arr_size; i++)
  {
    if(max<n[i]) max=n[i];
  }

  return max;
}

int main(){
  int n[5];
  int sum=0;
  int arr_size=sizeof(n)/sizeof(int);

  for(int i=0; i<arr_size; i++)
  {
    printf("[%d]번째 숫자 입력 :", i+1);
    scanf(" %d", &n[i]);
  }

  printf("MAX is %d, MIN is %d\n", Max(n, arr_size), Min(n, arr_size));

  return 0;
}

int Max(int *n, int arr_size)
{
  int max=INT_MIN;

  for(int i=0; i<arr_size; i++)
  {
    if(max<n[i]) max=n[i];
  }

  return max;
}

 printf("MAX is %d, MIN is %d\n", Max(n, arr_size), Min(n, arr_size));