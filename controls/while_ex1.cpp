#include <cstdio>

int main(void){
	int num=0, i=1;
	printf("양의 정수 입력: \n"); 
	scanf("%d", &num);

	while(i<=num){
		printf("Hello World!\n");
		i++;
	}
	
	return 0;
}
