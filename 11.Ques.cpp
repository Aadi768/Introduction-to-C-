#include <iostream>

int main(){
/*  Ques -- Take a positive number and tell if it is divisible by 5 and 3 */
	int x ;
	std::cout << "Enter The Number .: " ;
	std::cin >> x ;
                   	
	if ( x%3 == 0 && x%5 == 0 ) {
		std::cout << "Is Divisble By 3 and 5. " ;
	}
	else {
		std::cout << "Is Not Divisble By 3 and 5." ;
	}


/*  Ques -- Take a positive number and tell if it is divisible by 5 or 3 */
	int y ;
	std::cout << "Enter The Number .: " ;
	std::cin >> y ;
                   	
	if ( y%3 == 0 || y%5 == 0 ) {
		std::cout << "Is Divisble By 3 or 5. " ;
	}
	else if ( y%3 == 0 ) {
		std::cout << "Is Divisble By 3. " ;
	}
	else if ( y%5 == 0 ) {
		std::cout << "Is Divisble By 5. " ;
	}
	else {
		std::cout << "Is Not Divisble By 3 and 5." ;
	}



}