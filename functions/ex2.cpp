#include <iostream>

int change_val(int *p){
	*p = 3;

	return 0;
}

int main(){
	int number = 0;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
}

/*
 change_val함수의 인자 p에 number의 주소값을 전달하여 *p를 통해 number를 참조하여 number의 값을 3으로 바꾸었다.
 C언어에서는 변수의 주소값을 얻고싶으면 &를 변수명 앞에 써야한다.
 매번 &를 쓰는게 귀찮다고 하는데 C++에서는 레퍼런스라는 개념을 이용할 수 있따.
 */
