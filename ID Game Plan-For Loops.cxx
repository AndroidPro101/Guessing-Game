#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numberofleaves = 14;
	
	for (int i = 0; i < numberofleaves; i++)
	{cout<< "A leaf fell to the ground."
			<< i+1 << "leaves have fallen."
		
			<< endl;
	}
	
	cout<< "All the leaves fell." <<endl;
	
}
