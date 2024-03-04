#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int countWords(const char*str)
{
    int count = 0;
    int inWord = false;

    for(int i=0;str[i]!= '\0';i++)
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && !inWord)
        {
            inWord = true;
            count++;
        }
  else if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && inWord)
    {
        inWord = false;
    }
   }
   return count;
}


int main()
{

int inputString [100];
printf("Enter the string:");
fgets(inputString, sizeof(inputString),stdin);

int wordCount = countWords(inputString);

printf("The number of words:%d\n",wordCount);

return 0;
}
