#include <stdio.h>
int min(int x, int y)
{
  if (x < y)
    return x;
  else
    return y;
}
int max(int x, int y)
{
  if (x > y)
    return x;
  else
    return y;
}
int main()
{
  int a;
  printf("Enter first no::");
  scanf("%d", &a);
  int b;
  printf("Enter 2nd no::");
  scanf("%d", &b);
  int m = min(a, b);
  int n = max(a, b);
  printf("Minimum of %d and %d is %d \n", a, b, m);
  printf("Maximunn of %d and %d is %d", a, b, n);
  return 0;
}