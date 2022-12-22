#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Enter the radius, height and length of the camel");
    scanf("%f %f %f",radius,height,length);
}

int find_mood(float radius, float height, float length)
{
    int mood;
    if(radius<height && radius<length)
    mood=1;
    else if(height<length && height<radius)
    mood=0;
    else if(length<height && length<radius)
    mood=-1;
    return mood;
}

void output(int mood)
{
    if(mood==1)
    printf("The Camel is Sick");
    else if(mood==0)
    printf("The Camel is Happy");
    else if(mood==-1)
    printf("The Camel is Tense");
}

int main()
{
    int mood;
    float radius,height,length;
    input_camel_details(&radius,&height,&length);
    mood=find_mood(radius,height,length);
    output(mood);
    return 0;
}