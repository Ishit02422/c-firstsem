#include<iostream>
using namespace std;
int main()
{
	int i,n,factorial=1;
	cout<<"enter the number="<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
		factorial=factorial*i;
		cout<<" the factorial of natural numbers="<<factorial<<endl;
	}
}
