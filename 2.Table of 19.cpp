#include <iostream>

int main()
{
// Method 1
    for(int i=1 ; i<=10 ; i++){
        std::cout << i*19 << std::endl ;
    }
// Method 2
    std::cout << std::endl ;
    
    for(int i=1 ; i<=190 ; i++){
         if( i%19==0 ) std::cout << i << std::endl ;
     }
}
