#include<stdio.h>
#include<math.h>

int main(){
	int i=0;
	int cont=0;
	int j=0;
	int cantp=0;
for(i=1;i<=200;i++){
	cont=0;
	for(j=1;j<=i;j++){
        
		if(i%j==0){
		cont++;
			}
	
		}
	if(cont==2)
	{
	printf("%d\n",i);

		cantp++;
}
	}

	printf("Existen %d primos", cantp);
	
}
