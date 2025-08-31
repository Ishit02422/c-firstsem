#include<iostream>
using namespace std;
int main()
{
	int i,n,square=1;
	cout<<"enter the number="<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
		square=i*i;
		cout<<" the square of natural numbers="<<square<<endl;
	}
}

