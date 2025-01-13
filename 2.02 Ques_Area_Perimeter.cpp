/* Ques - Given the length and breadth of a rectangle, WAP to find whether 
	the area of the rectangle is greater than its perimeter */ 
#include <iostream>

int main (){
	float l ;
	std::cout << "Enter Length of Rectangle .: " ;
	std::cin >> l ;
	
	float b ;
	std::cout << "Enter Width of Rectangle .: " ;
	std::cin >> b ;
	
	float peri = 2*l*b ;
    float area = l*b ;
    
    if ( area>peri ){
    	std::cout << "Area is larger than perimeter." << '\n' ;
	}
	else {
		std::cout << "Area is smaller than perimeter." << '\n' ;
	}
}
