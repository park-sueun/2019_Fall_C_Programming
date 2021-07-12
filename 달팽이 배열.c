#include <stdio.h>

int makeSnail(int (*arr)[4], int arrSize);

int showArray(int (*arr)[4], int arrSize);

int main(void){

  int arr[4][4]={0};
  int arrSize = sizeof(arr)/sizeof(arr[0]);

  makeSnail(arr, arrSize);

  showArray(arr, arrSize);
    
  return 0;

}

int makeSnail(int (*arr)[4], int arrSize){

  int x=0, y=0;
  int count=1, limit=arrSize, turn=0;
  int direction=1; // 양의 방향(->) : +1, 음의 방향(<-) : -1
    
  while(1){

    for(int i=1; i<limit; i++){
      arr[x][y]=count;
      if(direction==1) y++;
      else if(direction==-1) y--;
      count++;
    }
      
    turn++;
        
    if(count>=(arrSize*arrSize)) break;

    for(int j=1; j<limit; j++){
      arr[x][y]=count;
      if(direction==1) x++;
      else if(direction==-1) x--;
      count++;
    }

    direction*=(-1);
    
    turn++;

    if(turn%4==0){
      limit-=2;
      x++;
      y++;
    }

  }
  
  arr[x][y] = count;
  
  return 0;

}

int showArray(int (*arr)[4], int arrSize){
 
  for(int i=0; i<arrSize; i++){
    for (int j=0; j<arrSize; j++) printf("%-2d ", arr[i][j]);
    printf("\n");
  }

  return 0;

}