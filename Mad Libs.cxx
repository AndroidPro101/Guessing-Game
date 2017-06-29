#include <iostream>
#include <string>
using namespace std;
int main()
{
int num;
string noun;
string verb;
cout<< "Pick a number: ";
cin>>num;
cout<< "You have picked " <<num;
cout<< ". Now pick a noun: ";
cin>> noun;
cout<< "You have picked " <<noun;
cout<< ". Now pick a verb: ";
cin>> verb;
cout<< "You have picked " <<verb;
cout<< ". Your sentence is: " <<num<< " "<<noun << " " <<verb;
return 0;
}
