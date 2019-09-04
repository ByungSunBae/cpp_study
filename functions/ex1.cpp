#include <iostream>

void print_square(int arg);
int main(){
	int i;

	std::cout << "제곱할 수? : ";
	std::cin >> i;

	print_square(i);

	return 0;
}

void print_square(int arg){
	std::cout << "전달된 인자 : " << arg * arg << std::endl;
}

/*
 void형 함수란 리턴할 값이 없는 함수를 말한다. 
 보통 프로그램을 만들 때 효과음 혹은 미리 정해진 메세지를 출력할 때 void함수로 정의하여 사용한다.
 함수 타입에 void라고 적으면 되는데 voidl형 함수는 내부적으로 작업만 할 뿐 계산결과를 리턴하지 않는다.
 */
