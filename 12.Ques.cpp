#include <iostream>

int main (){
/* Ques - Take 3 number input and tell if they can be the sides of a triangle*/
	int a , b , c ;
	std::cout << "Enter the First side .: " ;
	std::cin >> a ;
	std::cout << "Enter the Second side .: " ;
	std::cin >> b ;
	std::cout << "Enter the Third side .: " ;
	std::cin >> c ;
	
	if ( (a+b)>c && (b+c)>a && (a+c)>b ) {
		std::cout << "Sides of valid Triangle." ;
	}
	else {
		std::cout << "Can't make a triangle." ;
	}

}