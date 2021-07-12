#include <stdio.h>
#include <string.h>

void Reverse(char input[]);

int main(void) 
{
    char input[50]; //Allocate memory for entering string
    
    printf("Enter a string : ");
    fgets(input,sizeof(input),stdin); //Use 'fgets' to enter a string that contains spacesEnter a string 

    Reverse(input); //function
    
    return 0;
}

void Reverse(char input[])
{
    char output[50]={0}; //Allocate memory for string to be output by the computer

    for(int i=0; i<=strlen(input); i++)
    {
        output[i]=input[strlen(input)-i]; //output memory fills the memory from the last string memory of the input (including the enter)
        printf("%c", output[i]); //print output
    }
  
}