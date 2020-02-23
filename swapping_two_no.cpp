#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the two number to swap :"<<endl;
	cin>>a>>b;
	cout<<"Before swapping "<<endl;
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After sawpping "<<endl;
	cout<<"a = "<<a<<endl<<"b = "<<b;
}
