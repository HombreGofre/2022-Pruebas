#include <stdio.h>

int fnb(int num);

int main()
{
  int i;
  int n;
  
  n = 10;
  for (i = 1; i <= n; i++)
  {
    printf("%i, ", fbn(i));
  }
  return 0;
}
int fbn(int num)
{
  if (num == 0 || num == 1)
    return (num);
  else
    return (fbn(num - 1) + fbn(num - 2));
}
