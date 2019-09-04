#include <iostream>

int main(void){
	int num = 13; // 13의 비트표현 : 00000000 00000000 00000000 00001101

	int result1 = num << 1; // num의 비트 열을 왼쪽으로 1칸씩 이동
	int result2 = num << 2; // num의 비트 열을 왼쪽으로 2칸씩 이동
	int result3 = num << 3; // num의 비트 열을 왼쪽으로 3칸씩 이동

	std::cout << "1칸 이동 결과: " << result1 << "\n"
		  << "2칸 이동 결과: " << result2 << "\n"
		  << "3칸 이동 결과: " << result3 << "\n";
	return 0;
}
