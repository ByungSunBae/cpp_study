#include <cstdlib>
#include <cstdio>

int main(int argc, char* argv[]){
	int i = atoi(argv[1]);
	int b = i >> 2;
	printf("Result of right shift 2 : %d\n", b);
	return 0;
}
