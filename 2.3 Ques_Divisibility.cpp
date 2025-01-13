#include <iostream>

int main(){
/*  Ques -- Take a positive number and tell if it is divisible by 5 and 3 */
	int x ;
	std::cout << "Enter The Number .: " ;
	std::cin >> x ;                            // input
                   	
	if ( x%3 == 0 && x%5 == 0 ) {             // checking for divisibility
		std::cout << "Is Divisble By 3 and 5. " ;
	}
	else {                                    // if  not print this
		std::cout << "Is Not Divisble By 3 and 5." ;
	}
	std::cout << std::endl ;
	std::cout << std::endl ;

/*  Ques -- Take a positive number and tell if it is divisible by 5 or 3 */
	int y ;
	std::cout << "Enter The Number .: " ;
	std::cin >> y ;                         // input
                   	
	if ( y%3 == 0 || y%5 == 0 ) {          // div. by 3 or 5
		std::cout << "Is Divisble By 3 or 5. " ;
	}
	else if ( y%3 == 0 ) {                 // div. by 3 
		std::cout << "Is Divisble By 3. " ;
	}
	else if ( y%5 == 0 ) {                // div. by 5    
		std::cout << "Is Divisble By 5. " ;
	}
	else {                               // not div by any
		std::cout << "Is Not Divisble By 3 and 5." ;
	}



}
