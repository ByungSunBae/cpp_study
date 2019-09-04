#include <iostream>                                                                          
using namespace std;                                                                         
                                                                                             
int main(void){                                                                              
        int ArrayInt1[5]={10, 24, 30, 44, 59}; //Case1                                              
        float ArrayFloat[]={3.4, 2.1, 9.4, 5.34, 14.2};  //Case2                                      
        int ArrayInt2[8]={2, 4, 3, 3, 1}; //Case3                                                    
        int arint1Len, arflotLen, arint2Len, i;                                              
                                                                                             
        cout << "배 열  ArrayInt1의  크 기 : " << sizeof(ArrayInt1) << "\n"                       
                << "배 열  ArrayFloat의  크 기 : " << sizeof(ArrayFloat) << "\n"                  
                << "배 열  ArrayInt2의  크 기 : " << sizeof(ArrayInt2) << endl;                   
        
				// 배열의 길이구하기                                                                                     
        arint1Len=sizeof(ArrayInt1) / sizeof(int);                                          
        arflotLen=sizeof(ArrayFloat) / sizeof(float);                                        
        arint2Len=sizeof(ArrayInt2) / sizeof(int);                                           
                                                                                             
        for(i=0; i<arint1Len; i++){                                                          
                cout << ArrayInt1[i] << " ";                                                 
        }                                                                                    
        cout << "\n";

				for(i=0; i<arflotLen; i++){                                                          
                cout << ArrayFloat[i] << " ";                                                
        }                                                                                    
        cout << "\n";                                                                        
                                                                                             
        for(i=0; i<arint2Len; i++){                                                          
                cout << ArrayInt2[i] << " ";                                                 
        }                                                                                    
        cout << "\n";                                                                        
                                                                                             
        return 0;                                                                            
}
