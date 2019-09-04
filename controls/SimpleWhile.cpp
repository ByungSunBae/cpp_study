#include <cstdio>

int main(void){
	int num=1;
	int result=0;

	while(num<=10){
		result += num;
		printf("%d번째 결과: %d \n", num, result);
		num++;
	}
	return 0;
}
