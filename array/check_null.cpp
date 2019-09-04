#include <iostream>

int main(void){
	char str[]="I like pizza";
	printf("string: %s \n", str);

	str[7]='\0';
	printf("string: %s \n", str);
	
	str[2]='\0';
	printf("string: %s \n", str);

	return 0;
}
