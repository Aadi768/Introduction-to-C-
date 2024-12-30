/* Ques -- WAP to create a calculator that performs basic airthematic operations
 (add, subtract, multiply and divide )using switch case .The calculator should 
 input two numbers and an operator from user */
 #include <iostream>
 
 int main (){
 	
 	// Normal Aproach
 	
//	float num1 ;
//	std::cin >> num1 ;
//	char op ;
//	std::cin >> op ;
//	float num2 ;
//	std::cin >> num2 ;
//    
//	if ( op=='+' ){
//		std::cout << num1+num2 ;
//	}
// 	else if ( op=='-' ){
//		std::cout << num1-num2 ;
//	}
// 	else if ( op=='*' ){
//		std::cout << num1*num2 ;
//	}
//	else if ( op=='/' ){
//		std::cout << num1/num2 ;
//	}
//	else {
//		std::cout << "error" ;
//	}



        //Switch Case
	float num1 ;
	std::cin >> num1 ;
	char op ;			// operator
	std::cin >> op ;
	float num2 ;
	std::cin >> num2 ;
    switch(op) {
    	case'+' :
    		std::cout << num1+num2 ;
    		break ;
    	case'-' :                      // case work as if 
    		std::cout << num1-num2 ;   // and else if 
			break ;                 
    	case'*' :
    		std::cout << num1*num2 ;
    		break ;
    	case'/' :
    		std::cout << num1/num2 ;
    		break ;
    	default :                      // default is like else when any case is not matched
    		std::cout << "Invalid Operator" << std::endl ;
	}
 
 // without break all the case will below where 'op' match 'case'
 
 	// give input eg. 4+4
 }