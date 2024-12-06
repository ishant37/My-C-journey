// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("Enter n=");
//   scanf("%d", &n);
//   for (int i = 0; i <= n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }

//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int n;
//   printf("Enter n=");
//   scanf("%d", &n);
//   for (int i = 0; i <= n; i++)
//   {
//     for (int j = 0; j <= i; j++)
//     {
//       if (i == j || i + j == n)
//       {
//         printf("%d", i);
//       }
//       else
//       {
//         printf(" ");
//       }
//     }
//     printf("\n");
//   }

//   return 0;
// }

#include <stdio.h>

int main()
{
  // size of the square
  int size;
  printf("Enter size of the square=");
  scanf("%d", &size);
  // external loop
  for (int i = 0; i < size; i++)
  {
    // innternal loop
    for (int j = 0; j < size; j++)
    {
      // in first and last row print only stars
      if (i == 0 || i == size - 1)
      {
        printf("* ");
      }
      else
      {
        // at first and last position
        // of row print stars else print spaces
        if (j == 0 || j == size - 1)
        {
          printf("* ");
        }
        else
        {
          printf(" ");
        }
      }
    }
    printf("\n");
  }
  return 0;
}