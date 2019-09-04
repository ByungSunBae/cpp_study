#include <cstdio>

int main(void){
	int i=0;
	int j;

	while(i<=4){
		j=1;
		while(j<=i){
			printf("%s ", "○");
			j++;
		}
		printf("%s \n", "*");
		i++;
	}
	return 0;
}
