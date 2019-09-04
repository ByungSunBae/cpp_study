#include <iostream>

void Add(int Val);

int num; //전역변수는 기본 0으로 초기화됨

int main(void){
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void Add(int Val){
	num += Val;
}
