#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	for(i=100;i<200;i++)
	{
		if(i%7==0)
		{
			cout<<i<<endl;
			sum=i+sum;
		}
	}
	cout<<"sum of numbers="<<sum<<endl;
}
