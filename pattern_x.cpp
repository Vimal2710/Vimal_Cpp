#include<iostream>
using namespace std;
int main()
{
	int a,i,j;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			if(i==j||(i+j)==(a+1))
			{
				cout<<"v";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
