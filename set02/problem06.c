#include <stdio.h>
int input_n()
{  int n;
  printf("Enter array size:");
  scanf("%d", &n);
    return n;
}
void input(int n, int a[n])
{
  for(int i=0;i<n;i++)
  { printf("Enter the elements of the array");
    scanf("%d",&a[i]);
  }
}
float odd_average(int n, int a[n])
{ int sum;
  int j=0; 
  float avg;
  for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
        sum=sum+a[i];
        j++;
      }
     }
  avg=sum/j;
  return avg;
}
void output(float avg)
{
  printf("The average of odd numbers in the array is %f", avg);
}

int main()
{ int n;
  float average;
  n = input_n();
  int a[n];
  input(n,a);
  average=odd_average(n,a);
  output(average);
  return 0;
}
