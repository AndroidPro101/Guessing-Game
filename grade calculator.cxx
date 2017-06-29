#include <iostream>
using namespace std;

int main()
{
	int num;
	int total=0;
	int count = -1;
	
	while(num!=999){
	cout<< "Enter your grade: ";
	cin >> num;
	total+=num;
	count = count + 1;
	
	}
total-=999;


cout<< "The sum of your grades is: " <<total<<endl;
cout << "The number of grades you entered is: "<<count<<endl;
if(total/count);
{
	cout<< ". Your average is: "<<total/count;
}
if((total/count) >90 && (total/count) <101){
	cout<< ". That means you got an A! I guess you're going to college!";
}
if((total/count) >80 && (total/count) <89){
	cout<< ". That means you got a B! You have to step it up if you want to be the validictorian!";
}
if((total/count) >70 && (total/count) <79){
	cout<< ". That means you got a C! That's not that good!";
}
if(total/count >60 && total/count <69){
	cout<< ". That means you got a D! That's terrible!!!";
}
if(total/count >0 && total/count <59){
	cout<< ". That means you got an F! You're an absolute FAILURE so stop trying!!";
}

return 0;
}
