#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter character,alphabeat,digite";
	cin>>ch;

	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		{
			cout<<"alphabet";
		}
	else if((ch>='0') && ch<='9')
		{
			cout<<"digit";
		}
	else
		{
			cout<<"other charater";
		}
	return 0;
}

