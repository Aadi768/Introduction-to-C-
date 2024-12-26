/* Ques:- If cost price and selling price of an item is input through 
	  the keyboard, write a program to determine whether the seller has made
	  profit or incurred loss or no profit or no loss. Also dtermine how much 
	  profit he made or loss he incurred. */
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
