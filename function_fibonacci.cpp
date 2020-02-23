#include<iostream>
#include<conio.h>

using namespace std;
void generateFibo();

int main()
{
	generateFibo();
	return 0;
}
void generateFibo()
{
	int i,num1,num2,num3,terms;
	
	cout<<"how many terms do you want to find in fibonacci serise : "<<endl;
	cin>>terms;
	
	num1=0;
	num2=1;
	num3=0;
	
	for(i=1;i<=terms;i++)
	{
		cout<<num3<<"\t";
		num1=num2;
		num2=num3;
		num3=num1+num2;
	}
	
}
