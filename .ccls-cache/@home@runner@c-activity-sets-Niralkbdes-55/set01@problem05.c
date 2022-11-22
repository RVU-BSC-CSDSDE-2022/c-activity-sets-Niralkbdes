#include <stdio.h>
int input()
{
int a;  
  printf( "Enter any number\n");
  scanf("%d", &a);
  return a;
}
int compare ( int a, int b , int c)
{
  if (a>b && a>c)
    return a;
  else if (b>a && b>c)
    return b;
  else 
  return c;
}
int main ()
{
  int x,y,z, largest;
   x = input();
   y = input();
   z = input();
  largest = compare (x,y,z);
printf("The largest number between %d and %d is %d", x,y,z,largest);
  return 0;
}