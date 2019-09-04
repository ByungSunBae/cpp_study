#include <stdio.h>

int main(void){
	int num1=10, num2=3;
	printf("%d + %d = %d \n", num1, num2, num1+num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d × %d = %d \n", num1, num2, num1*num2);
	printf("%d ÷ %d 의 몫 = %d \n", num1, num2, num1/num2);
	printf("%d ÷ %d 의 나머지 = %d  \n\n", num1, num2, num1%num2);

	int num3=8, num4=5;
	printf("num3: %d \n", num3);
	printf("num3++: %d \n", num3++);  //후위증가
	printf("num3: %d \n\n", num3);
	printf("num4: %d \n", num4);
	printf("++num4: %d \n", ++num4);  //전위증가
	printf("num4: %d \n\n", num4);

	return 0;
}
