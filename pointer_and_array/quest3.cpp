#include <iostream>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr[4];
	int total = 0;

	for(int i=4; i>-1; i--){
		total += *(ptr--);
	}

	printf("Result : %d \n", total);
	return 0;
}
