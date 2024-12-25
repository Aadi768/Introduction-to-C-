// if ( condition ){
//               output
//}
// else { output }

#include<iostream>
using namespace std;
int main(){
//Ques :- Take Positive integer input and tell if it is even or odd.
   int n;
   cout << "Enter The Number = ";  
   cin >> n;
   if( n%2==0 ){
   		cout << "even number"; 
   }
   if( n%2!=0 ) {
		cout << "odd number";
   }

//Ques :- Take integer input and print the absolute value of that integer
   int x;
   cout << "Enter The Number =";
   cin >> x;
   if( x>0 ) {cout << x;}
   else {cout << -x;}

}