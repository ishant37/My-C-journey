#include <stdio.h>
#include <string.h> // Include the string library for strlen()

int main()
{
  char name[20];
  int maxLength = 9;
  char add;
  // char...;
  printf("Enter your name: ");
  scanf("%19s", name);

  int length = strlen(name); 

  if (length > maxLength)
  {
    char shortenedName[13];                  
    strncpy(shortenedName, name, maxLength); 
    shortenedName[maxLength] = '\0';         
    strcat(shortenedName, "...");
    printf("your name is %s", shortenedName);
  }
  else   
  {
    printf("Your name is fine\n %s", name);
  }

  return 0;
}
