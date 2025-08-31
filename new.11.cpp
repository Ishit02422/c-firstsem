#include<iostream>
using namespace std;
int main()
{
	int a,choice;
	cout<<"enter your number a=";
	cin>>a;
	
	if(a<0)
		{
			cout<<"your entered value is negative";
		}
	else if(a>0)
		{
			cout<<"your entered value is positive";
		}
	else
		{
			cout<<"your entered value is zero";
		}
	return 0;
}

