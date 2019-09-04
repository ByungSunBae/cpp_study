#include <iostream>

int main(){
	int result;
	int a, b = 0;

	std::cout << "---- 정수 2개 덧셈 ----" << std::endl;
	std::cout << "1번째 숫자: ";
	std::cin >> a;
	std::cout << "2번째 숫자: ";
	std::cin >> b;
	
	result = a + b;
	std::cout << "결과 : " << result << std::endl;

	return 0;
}
