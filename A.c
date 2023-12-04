/*

     * 
  *     *
*         *
*		  *	
* * * * * *
*		  *	
*         *
*		  *

*/

#include<stdio.h>

void main()
{
	int i;
	
	for (i=1; i<=8; i++){
		if(i==3 || i==4 || i==6 || i==7 || i==8 ){
			printf ("*         *\n");
		}else if(i==2){
			printf("  *     *  \n");
		}else if(i==5){
			printf("* * * * * *\n");
		}else{
			printf("     *     \n");
		}
	}
	}	

