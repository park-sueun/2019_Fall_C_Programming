#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int Repeat(char num[]);

int main()
{
    char num[10];

    printf("Enter a Integer : ");
    scanf("%s", num); //Enter a Integer
    for(int i=0; i<strlen(num); i++)
    {
      if(num[i]<48 || num[i]>57) //When num is not a number but a character is entered
      {
          printf("Error, wrong input"); 
          return 0; 
      }
    }

    int result=Repeat(num);

    if(result==1) printf("more than once\n"); //when the number repeats
    else printf("just once\n"); //when the number does not repeat

    return 0;
}

int Repeat(char num[]) //repeatability determination function
{
    for(int i=0; i<=strlen(num); i++)
    {
        for(int j=i+1; j<=strlen(num); j++)
        {
            if(num[i]==num[j]) return 1; //Returns 1 when the number repeats
        }
    }
    
    return 0; //If the number does not repeat, return 0
}