#include <iostream>

int main(){
	int a = 10;
	std::cout << a << " and " << &a << std::endl;

	int &ref = a;
	std::cout << ref << " and " << &ref << std::endl;

	int b = 3;
	std::cout << b << " and " << &b << std::endl;

	ref = b;
	std::cout << ref << " and " << &ref << std::endl;
	
	return 0;
}

/*
 레퍼런스는 한번 초기화 되면 다른 변수의 별명이 될 수 없다.
 */
