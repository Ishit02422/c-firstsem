#include<iostream>
using namespace std;
int main()
{
	int i,j,r;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
		{
			cout<<" ";
		}
		for(r=1;r<=i;r++)
		{
			cout<<" ";
			cout<<i;
		}
		cout<<endl;
	}
}
