#include <iostream>
using namespace std;

int main(void)
{
	int a=1;
	double b=1.0;

	int * ptr1=&a;
	double * ptr2=&b;

	printf("Address of a is %p \n", ptr1);
	printf("Address of b is %p \n", ptr2);

	printf("Address of a + 1: %p | Address of a + 2: %p \n", ptr1+1, ptr1+2); //4가 증가하고 8이 증가한다.
	printf("Address of b + 1: %p | Address of b + 2: %p \n", ptr2+1, ptr2+2); //8이 증가하고 16이 증가한다.

	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4가 증가한다.
	ptr2++; // 8이 증가한다. (why??? : )
	printf("%p %p \n", ptr1, ptr2);
	return 0;
}

// Type형 포인터를 대상으로 n의 크기만큼 값을 증가 및 감소 시, n x sizeof(Type)의 크기만큼 주소갑이 증가 및 감소한다!

