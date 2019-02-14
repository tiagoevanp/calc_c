#include <stdio.h>
#include <stdlib.h>

long calc(long num1, long num2, char* operator) {
	long result;

	switch(operator[0]) {
		case '+' : result = num1 + num2; break;
		case '-' : result = num1 - num2; break;
		case 'x' : result = num1 * num2; break;
		case '/' : result = num1 / num2; break;
	}
	return result;
}

void main(int argc, char **argv) {
	char * a;

	long firstNum = strtol(argv[1], &a , 10);
	long secondNum = strtol(argv[3], &a , 10);
	
	long result = calc(firstNum, secondNum, argv[2]);
	printf("%ld\n", result);
}