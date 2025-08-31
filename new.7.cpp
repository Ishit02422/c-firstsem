#include<iostream>
using namespace std;
int main()
{
	int i,n,odd,sum=0,total,even,j;
	cout<<"enter the number="<<endl;
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
	    {
	    	cout<<i<<endl;
	    	sum=i+sum;
		}
   }
    cout<<"the sum of odd numbers="<<sum<<endl;
   for(j=1;j<=n;j++)
   {
		if(j%2==0)
		{
			cout<<j<<endl;
			total=j+total;
		}
   }
   cout<<"the sum of even numbers="<<total<<endl;      
}
