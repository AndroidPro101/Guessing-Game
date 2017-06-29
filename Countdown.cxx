#include <iostream>
#include <string>

using namespace std;

int main()
{
	int stars = 0;
	
	
	cout<< "How many stars do you want to be displayed: ";
		cin>> stars;
		
	for (int i = 0; i < stars; i++)
	
	{
		for (int j = 0; j < stars;j++){
			cout<< "*";
			}
		cout<<endl;
	}
	
	 cout<< "There are your stars!"<<endl;
	 
}
