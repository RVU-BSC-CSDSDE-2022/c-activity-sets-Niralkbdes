#include <stdio.h>
#include <math.h>
struct _point
{
  float x;
  float y;
};
typedef struct _point Point;

Point input()
{
 Point a;
printf("Enter the x-coordinates of the point");
scanf("%f", &a.x);
printf("Enter the y-coordinates of the point");
scanf("%f", &a.y);
return a;
}

float dist(Point e, Point f)
{
  float res1,res2;
  float distance , p,q,r;
  res1 = f.x - e.x;
  res2 = f.y - e.y;
  p = pow(res1 , 2);
  q = pow(res2 , 2);
  r = p+q;
  distance = sqrt(r);
  return distance;
  }

void output(Point a, Point b, float distance)
{
  printf("The distance between the point %f %f and point %f %f is %f", a.x, a.y, b.x, b.y, distance);
  }

int main()
{
  Point e,f;
  float g;
  e = input ();
  f = input ();
  g= dist(e,f);
  output (e,f,g);
  return 0;
}