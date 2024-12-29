#include <iostream>

int main() {
	
	float x ;
	std::cout << "Enter the Marks .: " ;  // input
	std::cin >> x ;
	
	if ( x<=100 and  x>=81 ) { 
		std::cout << "Very Good" ; 
	}
	else if ( x<=80 and x>=61 ) {
		std::cout << "Good" ;   //else if ladder
	}
	else if  (  x<=60 and x>= 41 ) {
		std::cout << "Average" ;
	}
	else if ( x>=0 and x<=40 ) {
		std::cout << "Fail" ;
	}
	else {
		std::cout << "Error" ;
	}
}
 return 0;
}
