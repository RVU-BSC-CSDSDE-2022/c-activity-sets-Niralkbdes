#include <stdio.h>
void input(float *base, float *height)
{
  printf("Enter the value of base and height\n");
  scanf("%f%f", base, height);
}
float find_area(float base, float height)
{
  float area = 0.5 * base * height;
  return area;
}
void output(float base, float height, float area)
{
  printf("The area of the triangle with %f base and %f height is %f\n", base, height, area);
}
 main()
{
  float base, height, area;
  input(&base, &height);
  area = find_area(base,height);
  output(base,height,area);
  return 0;
}