#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"enter the end number of nature number "<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	{
		cout<<i<<"\t";
		sum=sum+i;
	}
	cout<<"\nsum of natural number is "<<sum<<endl;
}
