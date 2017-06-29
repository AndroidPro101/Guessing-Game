#include <iostream>
#include <string>
using namespace std;

int main(){

	int num1;
	int num2;
	int total1;
	int go = 1;

	
	while(go==1){
	cout<< "I am iDumb, your personal calculator. ";
	cout<< "Please enter the first number that you want me to calculate: ";
	cin>> num1;
	cout<< " Please enter the second number: ";
	cin>> num2;
	
	total1 = num1 + num2;
	
	cout<< "Your answer is: " <<total1;
	
	cout<< "If you would like to continue, press 1. ";
	cout<< "If you would like to stop, press 2.";
	cin>> go;
	}
	
	
	return 0;
}

