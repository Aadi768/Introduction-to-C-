#include<iostream>
using namespace std ;
int main(){
	int cp ;
	cout << "Enter The Cost Price .: " ;
	cin >> cp ;
	
	int sp ;
	cout << "Enter The Selling Price .: " ;
	cin >> sp ;
	
	if ( cp<sp ) {
		cout << "Profit of " << sp-cp <<" is made";
	}
	else {
		cout << "Loss of " << cp-sp << "is made." ;
	}
}
