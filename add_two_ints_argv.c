#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int add_two_ints(int x1, int x2);

int main(int argc, char** argv){//argument  count and argument vector
//int add_two_ints(int x1, int x2);
//int i;
//int num=atoi(argv[1]);
int x1=atoi(argv[1]);
int x2=atoi(argv[2]);

int result =add_two_ints( x1, x2);
printf("Result is %d\n", result);


}
int add_two_ints(int x1, int x2)
{
  return x1 + x2; // Use return to return a value
}
