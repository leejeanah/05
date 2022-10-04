#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trial = 0; 
	
	do
	{
		printf("guess a number: ");
		scanf("%d", &x);
	    {
	    	if(x > 59)
		     printf("high!\n");
		    else if(x < 59)
		     printf("low!\n");
		    else if(x == 59)
		     printf("congratulation!\n");
		 } 
		trial = trial + 1;
	}
	while (x != 59);
	 
	
    printf("number of trial = %i\n", trial);
	
	return 0;
}
