#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int size=5;
  int count=0;

  int *n=(int *)malloc(sizeof(int)*size);

  while(1)
  {
    printf("정수 입력: ");
    scanf(" %d", &n[count]);

    if(n[count]==-1) break;

    if(size==count+1) 
    {
      size+=3;
      n=(int *) realloc(n,sizeof(int)*size);
    }
    count++;
  }

  for(int i=0; i<count; i++)
  {
    printf(" %d", n[i]);
  }
  free(n);

  return 0;
}