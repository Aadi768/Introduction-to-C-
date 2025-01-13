#include <iostream>

int main() {
	

	float x , y ;
	std::cout << "Enter x-coordinate .: " ;
	std::cin >> x ;								// input 
	std::cout << "Enter y-coordinate .: " ;
	std::cin >> y ;
	if ( x==0 and y ==0 ){			// x,y = (0,0)
		std::cout << "Point is at the origin. " ;
	}
	else if ( x>0 && y>0 ){			// x,y = (+ve,+ve)
		std::cout << "Point is in 1st Quadrant"	;
	}
	else if ( x<0 && y>0 ){			// x,y = (-ve,+ve)
		std::cout << "Point is in 2st Quadrant"	;
	}
	else if ( x<0 && y<0 ){			// x,y = (-ve,-ve)
		std::cout << "Point is in 3st Quadrant"	;
	}
	else if ( x>0 && y<0 ){			// x,y = (+ve,-ve)
		std::cout << "Point is in 4st Quadrant"	;
	}
	else {
		std::cout << "Error" ;		// if user input any other value it will show error
	}
}
	
