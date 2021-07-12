#include <stdio.h>

void turnArray(int (*arr)[4], int arrSize);

void road_picture(int (*arr)[4], int arrSize);

int main(void){
  
  int arr[4][4];
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  
  int degree;
  
  printf("Loaded Picture !!!\n");
  road_picture(arr, arrSize);
  
  for(int i=0; i<arrSize; i++){
    for(int j=0; j<arrSize; j++){
      printf("%-2d", arr[i][j]);
    }
    printf("\n");
  }
  
  while(1){
    
    road_picture(arr, arrSize);// 원래 그림 상태로 돌려놓기 위함.
    
    printf("\ndegree (0:exit)? ");
    scanf(" %d", &degree);
    
    if(degree==0) break;
  
    for(int i=0; i<degree; i++){
      turnArray(arr, arrSize);
    }
      
    printf("\nRotated Picture !!!\n");
      
    for(int i=0; i<arrSize; i++){  // print array
      for(int j=0; j<arrSize; j++){
        printf("%-2d", arr[i][j]);
      }
      printf("\n");
    }
  }

  printf("\nfinished !!!");
  
  return 0;
}

void road_picture(int (*arr)[4], int arrSize){
  
  FILE *fp=fopen("picture.txt", "rt");
    
  if(fp!=NULL){
    
    for(int i=0; i<arrSize; i++){
      for(int j=0; j<arrSize; j++){
        fscanf(fp, " %d", &arr[i][j]);
      }
    }
  }
    
  fclose(fp);
  
}

void turnArray(int (*arr)[4], int arrSize){
  
    int temp[arrSize][arrSize];

    for(int i=0; i<arrSize; i++)
      for(int j=0; j<arrSize; j++)
        temp[j][(arrSize-1)-i] = arr[i][j];

    // 반시계 방향으로 회전 시 : temp[(arrSize-1)-j][i] = arr[i][j];
    
    for(int i=0; i<arrSize; i++)
      for(int j=0; j<arrSize; j++)
        arr[i][j] = temp[i][j];
        
}