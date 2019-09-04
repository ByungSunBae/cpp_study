#include <iostream>

int main(void){
	int num1 = 13; // 13의 비트 표현 : 00000000 00000000 00000000 00001101
	int num2 = ~num1;
	std::cout << "NOT 연산의 결과: " << num2
		  << "\n";
	return 0;
}
