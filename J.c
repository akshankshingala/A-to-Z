/*
*******
   *
   *
*  *
****      
*/

#include<stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=5; i++){
		if(i==1){
			printf("*******\n");
			}else if (i==4){
				printf("*  *\n");
			}else if(i==5){
					printf("****\n");
			}else{
				printf("   *\n");
			}
	}
}

