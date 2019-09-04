#include <cstdio>
#include <typeinfo>

int main(void){
	printf("literal type of %d: %s \n", 10, typeid(10).name());
	printf("literal type of %f: %s \n", 1.534, typeid(1.534).name());
	printf("literal type of %c: %s \n", 'b', typeid('b').name());
	return 0;
}
