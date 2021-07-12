#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person{ // Defining structures
  char name[20];
  int score;
}Person;

int road_student(Person *student[], int count); // Save student's name and score of 'input5.txt' in array of structure

int main(){
  Person *student[20]; // declaration of arrangement of 20 structures 
  int count=0;
  char input_name[20];

  count=road_student(student, count); // The number of stored students, which is the return value of the function, enter into 'count'.

  printf("What is student's name? : ");
  scanf(" %s", input_name); // prompts user name of student

  for(int i=0; i<count; i++){
    if(strcmp(input_name, student[i]->name)==0){
      printf("%s's score is %d.", student[i]->name, student[i]->score);
      break;
    } //display student’s score
  }
  
  return 0;
}

int road_student(Person *student[], int count){
  FILE *fp = fopen("input5.txt", "rt");
 
  while(1){
    if(feof(fp)) break;

    student[count]=(Person *)malloc(sizeof(Person)); // dynamic allocation

    fscanf(fp, " %s %d", student[count]->name, &student[count]->score); //Save the information in the file to the structure array pointer.
          
    count++; // Increase by 1 every time a student's information is stored in an array
  }

  fclose(fp);

  return count; //Return the number of students
}