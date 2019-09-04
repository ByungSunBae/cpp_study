#include <stdio.h>

int main(void){
	int i;
	float num = 0.0;

	for(i=0; i < 100; i++)
		num+=0.1; //해당 연산을 총 100번 수행

	printf("0.1을 100번 더한 결과: %f \n", num);
	return 0;
}
