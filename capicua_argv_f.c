#include<stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int capicua(int x1){
int nuo,nua = 0,aux;
    
       
    nuo = x1;
    while(x1 > 0)
    {
         aux = x1%10;
         x1 /= 10;
         nua = nua * 10 + aux; 
    }
    
    if(nuo ==nua)
       printf("is capicua.\n");
    else
       printf("not is capicua.\n");
    
    system("pause");
    return 0;

}


int main(int argc, char**argv){
int x1=atoi(argv[1]);
//int x2=atoi(argv[2]);


capicua(x1);



}
