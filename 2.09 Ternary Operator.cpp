// dont't use generally only when you can't use if and else
#include <iostream>

int main() {

	int n ;
	std::cout << "Enter The Num -- " ;
	std::cin >> n ;
	// (condition) ? if true : if false   <-- syntax
	
	( n%2==0) ? std::cout << "Even" : std::cout << "odd" ;
}
