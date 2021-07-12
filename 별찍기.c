// 직각삼각형 만들기01 (증가)
  for(int i=0;i<size;i++){
    for(int j=0;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }

// 직각삼각형 만들기02 (감소)
  for(int i=0;i<size;i++){
      for(int j=0;j<size-i;j++){
    printf("*");
      }
      printf("\n");
  }

// 피라미드 만들기 01 (증가)
  int size=5;
  for(int i=0;i<size;i++){
      for(int j=size-1;j>i;j--){
          printf(" ");
      }
        
      for(int j=0;j<2*i+1;j++){
    printf("*");
      }
      printf("\n");
  }

// 피라미드 만들기 02 (감소)
  int num=5;
  for(int i=0;i<num;i++){
      for(int j=0;j<i;j++){
          printf(" ");
      }

      for(int j=2*num-1;j>2*i;j--){
    printf("*");
      }
      printf("\n");
  }

// 다이아몬드 만들기
  int num=5;
  for(int i=0;i<num;i++){
      for(int j=num-1;j>i;j--){
    printf(" ");
      }
          
      for(int j=0;j<2*i+1;j++){
    printf("*");
      }
      printf("\n");
  }
    
  for(int i=1;i<num;i++){
    for(int j=0;j<i;j++){
    printf(" ");
    }
    
      for(int j=2*num-1;j>2*i;j--){
          printf("*");
      }
      printf("\n");
  }

// 모래시계 만들기
  int num=5;
  for(int i=1;i<num;i++){
    for(int j=0;j<i;j++){
    printf(" ");
    }
    
      for(int j=2*num-1;j>2*i;j--){
          printf("*");
      }
      printf("\n");
  }

  for(int i=1;i<num;i++){
      for(int j=num;j>i+1;j--){
        printf(" ");
      }
          
      for(int j=1;j<=(2*i+1);j++){
        printf("*");
      }
      printf("\n");
  }
  }