#include <cstdio>

int main(void){
	int total=0;
	int i, num;
	printf("0부터 num까지 덧셈, num값은? ");
	scanf("%d", &num);

	for (i=0; i<=num; i++){
		total += i;
	}

	printf("덧셈결과: %d \n", total);
	return 0;
}
