#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int add_two_ints(int num1, int num2);

int main(int argc, char** argv){
int num1=atoi(argv[1]);
int num2=atoi(argv[2]);

int suma =add_two_ints( num1, num2);
printf("add is %d\n", suma);


}
int add_two_ints(int num1, int num2)
{
  return num1 + num2; 
}
