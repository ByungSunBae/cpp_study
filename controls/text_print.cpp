#include <iostream>

int main(void){
	int i=0;
	std::string stuff("");

	while(i<=4){
		std::cout << stuff << "*" <<std::endl;
		stuff += "○ ";
		i++;
	}
	return 0;
}

