// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int n;
//   printf("Enter n=");
//   scanf("%d", &n);
//   // float root = sqrt(n);
//   float cube = cbrt(n);
//   printf("%f", cube);
//   return 0;
// }
#include <stdio.h>
#include <math.h>
int main()
{
  int n;
  printf("Enter base=");
  scanf("%d", &n);
  int m;
  printf("Enter power=");
  scanf("%d", &m);
  int p = pow(n, m);
  printf("the power of %d is %d and anser is %d", n, m, p);
  return 0;
}