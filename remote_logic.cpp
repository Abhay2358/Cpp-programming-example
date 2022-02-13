#include<iostream>
using namespace std;

main()
{
	int value;
	string firstName; 
	char user_input[3], a[3], b[3];
	cout<<"Type button value";
	cin>>user_input;
	cout<<user_input;
	a[3] = "ON";
	b[3] = 'OFF';
	if(a[3] == user_input[3]){
		value = 1;
	}
	else if(b[3] == user_input[3])
	{
		value = 0;
	}
	cout<<value;
	return 0;
}
