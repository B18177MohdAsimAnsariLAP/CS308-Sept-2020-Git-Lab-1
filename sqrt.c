/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("DEBUG: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0){
		//printf("DEBUG: invalid input!!\n\n");
		printf("DEBUG: Sqrt of given number %d is %fi\n",input,sqrt(-input));
		exit(-1);
	}
	printf("DEBUG: Sqrt of %d is %f\n",input,sqrt(input));
	printf("DEBUG: End of program. Exiting..\n\n");
	return(0);

} // end main
