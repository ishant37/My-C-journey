#include <stdio.h>
int main()
{
  char name[20];
  printf("Enter your name");
  scanf("%19s", name);
  printf("Welcome to %s in coding", name);
  return 0;
}