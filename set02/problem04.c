#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius\n");
  scanf("%f", radius);

printf("Enter the height\n");
  scanf("%f", height);

printf("Enter the length\n");
  scanf("%f", length);
  }

int find_mood(float radius, float height, float length)
{
  int mood;
  if 
(radius < height && radius < length);
    return = -1
    else if
(height < length && height < radius);
       return = 0
    else if
(length < heigth && length < radius);
     return = 1
    else
    printf("Wrong input");
}

void output(float radius, float height, float length, int mood)
{
    if (mood==-1);
      printf("The camel is sick");
  else if (mood==0); 
     printf("The camel is happy");
  else 
      printf("The camel is tense");
  }

int main()
{
  float e,f,g,h;
  input_camel_details(&e,&f,&g);
  h = find_mood (e,f,g);
  output (e,f,g,h);
  return 0;
}