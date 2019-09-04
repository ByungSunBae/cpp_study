#include <cstdio>

int main(void){
	int num=0, i=9;
	printf("거꾸로 외치는 구구단! 몇단?: \n");
	scanf("%d", &num);

	while(i>=1){
		printf("%dx%d=%d \n", num, i, num*i);
		i--;
	}
	
	return 0;
}
