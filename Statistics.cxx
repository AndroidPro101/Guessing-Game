#include <iostream>
using namespace std;
int main()
{
int num1;
int num2;
int num3;
int avg;

cout<< "Input first number...";
cin>> num1;
cout<< "Input second number...";
cin>> num2;
cout<< "Input third number...";
cin>> num3;

if(num1 > num2 && num1 > num3)
{
	cout<< "The greatest of your chosen numbers is: " <<num1;
	cout<<" ";
}
else{
	cout<< ". The greatest of your chosen numbers is NOT: " <<num1; 
	cout<<" ";
}
if(num2 > num3 && num2 > num1)
{
	cout<< ". The greatest of your chosen numbers is: " <<num2;
	cout<<" ";
}
else{
	cout<< ". The greatest of your chosen numbers is NOT: " <<num2;
	cout<<" ";
}
if(num3 > num2 && num3 > num1)
{
	cout<< ". The greatest of your chosen numbers is: " <<num3;
	cout<<" ";
}
else{
	cout<< ". The greatest of your chosen numbers is NOT: " <<num3;
	cout<<" ";
}

if(num1 < num2 && num1 < num3)
{
	cout<< ". The minimum of your chosen numbers is: " <<num1;
	cout<<" ";
}
else{
	cout<< ". The minimum of your chosen numbers is NOT: " <<num1;
	cout<<" ";

if(num2 < num3 && num2 <num1)
{
	cout<< ". The minimum of your chosen numbers is: " <<num2;
	cout<<" ";
}
else{
	cout<< ". The minimum of your chosen numbers is NOT: " <<num2;
	cout<<" ";
}
if(num3 < num2 && num3 < num1)
{
	cout<< ". The minimum of your chosen numbers is: " <<num3;
	cout<<" ";
}
else{
	cout<< ". The minimum of your chosen numbers is NOT: " <<num3;
	cout<<" ";
}

avg= (num1 + num2 +num3)/3;
cout<< ". The average of your chosen numbers is: " <<avg;
cout<<" ";
}
}
