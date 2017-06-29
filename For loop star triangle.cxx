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
		for (int j = -1; j < i; j++){
			cout<< "*";
			}
		cout <<endl;
		
	}

	for (int a = stars; a > 0; a--)
	{
		for (int b = 1; b <= a; b++)
		{
			cout<<"*";
		}

		cout<<endl;
	}
	
	 cout<< "There are your stars!"<<endl;
	 return 0;
}

