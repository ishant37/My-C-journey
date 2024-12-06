#include <stdio.h>
void oddeven(int x)
{
  if (x % 2 == 0)
    printf("%d is even", x);
  else
    printf("%d is odd", x);
  return;
}
int main()
{
  int n;
  printf("Enter no=");
  scanf("%d", &n);
  oddeven(n);
  return 0;
}