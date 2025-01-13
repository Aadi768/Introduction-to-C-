#include <iostream>

int main (){
/* Ques - Take 3 number input and tell if they can be the sides of a triangle*/
	int a , b , c ;
	std::cout << "Enter the First side .: " ;
	std::cin >> a ;   			// First side input
	std::cout << "Enter the Second side .: " ;       
	std::cin >> b ;  			// Second side input
	std::cout << "Enter the Third side .: " ;
	std::cin >> c ;	 			// Third side input
	
	if ( (a+b)>c && (b+c)>a && (a+c)>b ) {           // Testing condition for sides
		std::cout << "Sides of valid Triangle." ;
	}
	else {                                           // Condition not fulfiled
		std::cout << "Can't make a triangle." ;
	}

}
