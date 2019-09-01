#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Takes in a number and generates the Fibonacci sequence to that number */
int main(int argc, char *argv[]){

	unsigned long a,b,c;
	int input,i,temp;
	char iterations[10];

	if(argc > 1){

		fprintf(stderr, "USAGE: ./fib\n");
	        return -1;
	}

	a = 0, b = 1, i = 0;
	printf("Up to what number would you like to generate the fibonacci sequence to: ");
	while((input = getchar()) != EOF && input != '\n'){
		iterations[i] = input;
		++i;
	}

	iterations[i] = '\0';
	//convert the input to an int
	temp = atoi(iterations);
	//Check to see if value is greater than 93
	if(temp > 93){
		temp = 93;
		printf("Max value allowed is 93. Here is the fibonacci sequnece up to 93\n");
	}else
		printf("Here is the fibonacci sequnece up to %s\n",iterations);

	printf("0,1,");
	//Perform the fibonacci calculations
	for(i = 2; i <= temp; ++i){
		c = a + b;
		a = b;
		b = c;
		if(i != temp)
			printf("%lu,",c);
		else
			printf("%lu\n",c);
	}
	return 0;
}
