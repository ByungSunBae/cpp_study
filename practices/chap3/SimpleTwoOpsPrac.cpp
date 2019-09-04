#include <stdio.h>

int main(void){
	int num1, num2;
	int result1, result2;

	printf("Two number : ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;
	
	printf("Result of subtraction : %d \n", result1);
	printf("Result of multiplication : %d \n", result2);
	return 0;
}

