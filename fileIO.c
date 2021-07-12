#include <stdio.h>

int main(){

  FILE *fp ;

  if(fp!=NULL) printf("파일 오픈 성공 !\n");
  
  fp = fopen("test.txt", "wt");

  fprintf(fp, "%d", a);

  fclose(fp);

//파일에 저장된 정보를 특정값에 대입 없이 그냥 읽어올 때 

  fp = fopen("test.txt", "rt");

  while(fgets(str, sizeof(str), fp)!=NULL) printf(str);

  if(feof(fp)!=0) printf("파일 복사 완료!\n");
  else printf("파일 복사 실패!\n");
        
  fclose(fp);

//파일에 저장된 정보를 특정값에 대입할 때
  FILE *fp=fopen("user.txt", "rt");
  
  int i;

  for(i=0; i<10; i++){
    userlist[i]=(struct login_data *)malloc(sizeof(struct login_data));
    
    fscanf(fp, "%s %s", userlist[i]->id, userlist[i]->password);
  }
  
  fclose(fp);
        
  return 0;
}

//fflush(종류)->stdin, stdout, 파일 이름
//파일 모드 종류 : r(읽기), w(쓰기), a(덧붙이기)