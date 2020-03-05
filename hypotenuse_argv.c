#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <math.h>

float distance(float max, float min);

int main(int argc, char** argv)
{

float max =atoi(argv[1]);
float min =atoi(argv[2]);

float result=distance(max, min);
printf("distance is %f\n", result);


}
float distance(float max, float min)
{
  return sqrt(max*max + min*min); // Use return to return a value
}


