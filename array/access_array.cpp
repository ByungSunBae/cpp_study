#include <iostream>                                                                          
using namespace std;                                                                         
                                                                                             
int main(void){                                                                              
	int arr[5];                                                                         
	int sum=0, i;                                                                        
	                                                                                       
	arr[0]=10, arr[1]=43, arr[2]=20, arr[3]=60, arr[4]=57;                               
	                                                                                             
	for(i=0; i<5; i++)                                                                   
		sum += arr[i];                                                               
					                                                                                             
	cout << "배열요소에 저장된 값의 합 : " << sum << endl;                                
	return 0;
}
