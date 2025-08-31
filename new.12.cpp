#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,div,multi,sub;
	char op;
	cout<<"enter value of a";
	cin>>a;
	cout<<"enter value of b";
	cin>>b;
	cout<<"enter opretor";
	cin>>op;
	
	if(op=='+')
		{
			sum=a+b;
			cout<<" your sum is "<<sum;
		}
	else
		{
	if(op=='-')
		{
			sub=a-b;
			cout<<"your sub is "<<sub;
		}
	else
		{
	if(op=='*')
		{
			multi=a*b;
			cout<<"your multi is "<<multi;
		}
	else
		{
	if(op=='/')
		{
			div=a/b;
			cout<<"your div is "<<div;
		}
		}
		}
		}
return 0;
}


