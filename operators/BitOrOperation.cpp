#include <iostream>

int main(void){
	int num1 = 13; // 13의 비트 표현 : 00000000 00000000 00000000 00001101
	int num2 = 20; // 20의 비트 표현 : 00000000 00000000 00000000 00010100
	int num3 = num1 | num2; // num1과 num2의 비트단위 OR 연산
	std::cout << "OR 연산의 결과: " << num3
		  << "\n";
	return 0;
}
