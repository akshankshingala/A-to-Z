/*

 ******
*      *
*      *
*   *  *
*    * *
 ******
       *
	    *
	    
*/

#include<stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=8; i++){
		if(i==1 || i==6){
			printf(" ******\n");
		}else if(i==4){
			printf("*   *  *\n");
		}else if(i==5){
			printf("*    * *\n");
		}else if(i==7){
			printf("       *\n");
		}else if(i==8){
			printf("        *\n");
		}else{
			printf("*      *\n");
		}
	}
}

