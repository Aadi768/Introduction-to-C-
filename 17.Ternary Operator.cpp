// use generally when you only have if and else don't use in case of else if
#include <iostream>

int main() {

	int n ;
	std::cout << "Enter The Num -- " ;
	std::cin >> n ;
	// (condition) ? if true : if false   <-- syntax
	
	( n%2==0) ? std::cout << "Even" : std::cout << "odd" ;
}
