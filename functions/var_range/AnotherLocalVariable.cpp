#include <iostream>

int main(void){
	int count;
	for(count=1; count<=5; count++){
		int aa=0;
		aa++;
		printf("%d번째 반복, 지역변수 num은 %d. \n", count, aa);
	}

	if(count==6){
		int aa=10;
		aa++;
		printf("if문 내에 존재하는 지역변수 num은 %d. \n", aa);
	}
	return 0;
}
