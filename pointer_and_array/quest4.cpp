#include <iostream>

int main(void)
{
	int arr[] = {2, 1, 3, 4, 6, 5, 10, 12, 11, 9, 23, 50};
	int sizes = sizeof(arr)/sizeof(int);
	int i = 0, ch_num = 0;

	do
	{
		ch_num = 0;
		i = 0;
		
		while(i<(sizes-1))
		{
			int *ptr1 = &arr[i];
			int *ptr2 = &arr[i+1];
			
			if(*ptr1  < *ptr2)
			{
				*(--ptr2);
				*(++ptr1);
				ch_num += 1;
			
			}

			int a = *ptr1;
			int b = *ptr2;
			
			arr[i] = a;
			arr[i+1] = b;
			
			i++;	
		}
	}while(ch_num > 0);

	printf("Array : \n");
	for(int j=0; j<(sizes-1); j++){
		printf("%d \n", arr[j]);
	}
	return 0;
}

	
