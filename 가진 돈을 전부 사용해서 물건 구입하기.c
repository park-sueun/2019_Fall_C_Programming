#include <stdio.h>

int main(){
  int count[3]={1};
  int price[3]={500, 700, 400};
  int n; // 현재 소유하고 있는 금액
  int total=0;

  printf("현재 당신이 소유하고 있는 금액 : ");
  scanf(" %d", &n);

  //세가지를 하나 이상 사야하는 경우 i, j, k의 초기값을 1로 설정.
  for(int i=0; i<=n/price[0]; i++){
    for(int j=0; j<=n/price[1]; j++){
      for(int k=0; k<=n/price[2]; k++){
        total=((price[0]*i)+(price[1]*j)+(price[2]*k));

        if(total==n){
          printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", i, j, k);
          total=0;
          break;
        }

      }
    }
  }

  printf("어떻게 구입하시겠습니까?");

  return 0;
}