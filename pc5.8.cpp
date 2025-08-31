#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			if(i==1 || i==2 || i==5 || k==1 || k==3 && i==3 || k==4 && i==4)
			{
			cout<<" *";	
			}
			else
			{
				cout<<"  ";
			}
   }
		cout<<"\n";
	    }
return 0;
}
	
