#include <iostream>

int main(){
	
/* Ques - Take 3 positive integers input and print the greatest of them */	
	int a , b , c ;
	std::cout << "Enter the Number A .: " ;
	std::cin >> a ;
	std::cout << "Enter the Number B .: " ;  // Taking number as input
	std::cin >> b ;
	std::cout << "Enter the Number C .: " ;
	std::cin >> c ; 
	
	std::cout << std::endl ;
	
	if ( a>b && a>c){
		std::cout << "A is Greatest." ;
	}
	else if ( b>c && b>a ){
		std::cout << "B is Greatest." ;
	}
	else {
		std::cout << "C is Greatest." ;
	}


}
