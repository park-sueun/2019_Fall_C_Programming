#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct string{
    char word[20];
};

void input_word(struct string *str[], int count); // Enter the words

void Smallest(struct string *str[], int count); // determine which word would come first in dictionary orde

void Shortest(struct string *str[], int count); // detetmine which word has least number of alphabet

int main()
{
    struct string *str[100];
    int count=0;

  while(1){
    input_word(str, count); 

    if(strcmp(str[count]->word, "Q")==0) break; //The program stops accepting input when user enters "Q"
    else count++;
  } 

  Smallest(str, count);

  Shortest(str, count);

  return 0;
}

void input_word(struct string *str[], int count){
    
    str[count]=(struct string *)malloc(sizeof(struct string)); //dynamic allocation
    
    printf("Enter word: ");
    scanf(" %s", str[count]->word); // Enter the words

}

void Smallest(struct string *str[], int count){
  
  char *smallest;

  smallest=str[0]->word; //Initialize with the first word entered

  for(int i=1; i<count; i++){
    if(strcmp(smallest, str[i]->word)>0) smallest=str[i]->word;
  } // Compare the string to find the word that comes first in the dictionary and save it to 'smallest'.

  printf("Smallest word: %s\n", smallest);
}

void Shortest(struct string *str[], int count){

  char *shortest;

  shortest=str[0]->word; //Initialize with the first word entered

  for(int i=1; i<count; i++){
    if(strlen(shortest)>strlen(str[i]->word)) shortest=str[i]->word;
  } // Compare the length of the string and save the short word to 'shortest'.

  printf("Shortest word: %s\n", shortest);
}