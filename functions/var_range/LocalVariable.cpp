#include <iostream>

int FuncOne(void){
	int num=10;
	num++;
	printf("FuncOne num: %d \n", num);
	return 0;
}

int FuncTwo(void){
	int num1=40;
	int num2=50;

	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;
}

int main(void){
	int num=17;
	FuncOne();
	FuncTwo();
	printf("main num: %d \n", num);
	return 0;
}

