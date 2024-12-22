#include <iostream>
using namespace std;
int main() {
	// ways for initialiasation of data 
    int a ;
    a = 10;		// diffrent lines
    int b ;
    b = 11 ;
    cout << a + b << endl;
    
    int c , d ; //diff creation and initialization     
    c = 10 ;
    d = 11 ;
    cout << c + d << endl;
    
    int e = 10 , f = 11 ; // same creation and initialisation
    cout << e+f << endl;
    
    
    
    
    
	// updation of variable.............
   int x = 5;
   cout<<"x = "<< x << endl;

   x = 21;
   cout<< "New value of x = " << x << endl;

   x +=6 ;	// x = x + 6   
   cout << "x + 6 = " << x << endl;

   x = x - 20;
   cout <<"x - 20 = "<< x << endl;

   x *= 2;	// x = x * 2  
   cout << x << endl;
   
   x *= 7 ;
   cout << x << endl;
}
