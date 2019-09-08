#include <iostream>

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	
	// result code
	printf("Init value of ptr : %p \n", ptr);
	for(int i=0; i<5; i++){
		*(ptr++) += 2;
	}

	printf("after change value of ptr : %p \n", ptr);

	//final check
	printf("After change, arr :  \n");
	for(int i=0; i<5; i++){
		printf("%d \n", arr[i]);
	}
	return 0;

}
