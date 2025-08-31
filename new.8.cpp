#include<iostream>
using namespace std;
int main()
{
	int choice;
	double fehrenhit,celsius;
	cout<<"temperature conversion";
	cout<<"1.convert fehrenhit to celsius";
	cout<<"2.convert celsius to fehrenhit";
	cout<<"\n enter your choice:";
	if(choice==1)
	{
	cout<<"\n enter your temperature in fehrenhit:";
	cin>>fehrenhit;
	celsius=(fehrenhit-32)/1.8;
	cout<<celsius;
	}
	if(choice==2)
	{
	cout<<"\n enter your temperature in celsius:";
	cin>>celsius;
	fehrenhit=(1.8*celsius)+32;
	cout<<fehrenhit;
	}				
return 0;
}	

