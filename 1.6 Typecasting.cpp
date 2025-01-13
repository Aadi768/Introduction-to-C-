#include <iostream>
using namespace std;
int main(){

 // implicit typecasting
	int y ;
	cin >> y ;
	float y1 = y ;  // we just store y into y1 (data loss can occur sometime)
        cout << y1/2 << endl ;
    
 // explicit typecasting
	int x ;    
        cin >> x ;        
        float x1 = (float)x ;  // (float)x mean i want to convert x to float
                              //  float x1 signify that x1 variable is float 
        cout << x1/2 << endl;
    
    // heirarchy of operator 
      cout << "Heirarchy of operators is " ;
      cout << "B / O / D M / A S . " << endl;
	  cout << "Left to Write in same precedence ."; 
	}




































