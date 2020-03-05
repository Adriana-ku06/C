#include<stdlib.h>
#include<stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>

float distance(float max, float min);

int main()
{
float max,min,result;
    printf("calcular la hipotenuza");
printf( "Introduzca primer valor: \n  " );
    scanf( "%f", &max );
    
    printf( "\n   Introduzca segundo valor: \n  " );
    scanf( "%f", &min );

result=distance(max, min);
printf("distance is %f\n", result);


}
float distance(float max, float min)
{
  return sqrt(max*max + min*min); // Use return to return a value
}


