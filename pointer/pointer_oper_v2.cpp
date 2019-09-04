#include <iostream>

using namespace std;

int main(void){
	int num1=10, num2=20;
	double * pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum = &num2;
	(*pnum) -= 30;

	cout << "num1: " << num1 << ", num2: " << num2 << "\n";
	return 0;
}
