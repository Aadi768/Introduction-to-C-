#include <iostream>

int main(){

/* Ques - Take 3 positive integers input and print the greatest of them
           using nested if else  */
	int a , b , c ;
	std::cout << "Enter the Number A .: " ;
	std::cin >> a ;
	std::cout << "Enter the Number B .: " ;  // Taking number as input
	std::cin >> b ;
	std::cout << "Enter the Number C .: " ;
	std::cin >> c ; 
           
	if ( a>b ){
		if ( a>c ){
			std::cout << a << " is the greatest." ;   
		}                                             
		else { std::cout << c << " is the greatest" ; } // if b is smaller than a the it will be c>a>b
		
	}
	else {     // if b>a for then we made this else 
		if ( b>c ){ std::cout << b << " is the greatest." ;} // it will check for c as b is already > than a
		else { std::cout << c << " is the greatest." ;}
	}
	
	
}
	
