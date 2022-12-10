#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius");
scanf("%f", radius);

printf("Enter the height");
scanf("%f", height);

printf("Enter the length");
scanf("%f", length);
  }

float find_weight(float radius, float height, float length)
{
float weight;
int a,b,c;
a = pow(radius, 3);
b = height*length;
c = sqrt(b);
weight = 3.14*a*c;
return weight;
  }

int main()
{
  int e,f,g,h;
  input_camel_details( &e, &f ,&g);
  h = find_weight(e,f,g);
  printf("The weight of the camel is %f\n" ,h);
  return 0;
}
