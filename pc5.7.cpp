#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int a=1;a<=i;a++)
		{ 
		if(i==1 || i==2 || i==5 || a==1 || a==3 && i==3 || a==4 && i==4)
		{
		cout<<"*";	
		}
		else
		{
			cout<<" ";		
		}
    }
    	cout<<"\n";
        }
}
