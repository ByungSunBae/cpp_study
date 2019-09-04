#include <iostream>

int change_val(int &p){
	p = 3;

	return 0;
}

int main(){
	int number = 5;

	std::cout << number << std::endl;
	change_val(number);
	std::cout << number << std::endl;
}

/*
 레퍼런스란 어떤 다른 변수의 참고, 즉 다른 이름이란 의미를 가지고 있다.
 그래서 흔히 C++에서 레퍼런스를 참조자 라고도 한다.
 위 경우 p가 number 변수의 다른 이름이 되느 것이다.
 따라서, p = 3; 이란 명령은 number = 3; 과 정확히 일치하는 명령이 된다.

 레퍼런스 정의 방법
 int& ref = number;
 int타입 변수의 레퍼런스를 만들기 위해 int&로 정의
 그 오른쪽에 참고하고 싶은 것을 쓰면 된다.

 가장 중요한 특성
 반드시 정의 시 값이 초기화되어야한다. 참조자라는 의미가 무언가의 다른 이름이란 의미인데 초기화가 안되면 그 무언가가
 존재하지 않는 것이기 때문에 정의할 수 없기 때문이다.
 포인터와 달리 존재하는 실체가 아닌 단순한 별명이다.
 int& ref; // 이러한 문장은 존재할 수 없다!!
 */
