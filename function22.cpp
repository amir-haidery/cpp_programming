#include<iostream>
#include<conio.h>

int add(int x, int y);

using namespace std;
int main()
{
	int sum,num,num2;
	cout<<"Enter two number to be add :"<<endl;
	
	cin>>num>>num2;
	
	sum=add(num,num);
	
	cout<<"The added number is : "<<sum<<endl;
	
}
int add(int x,int y)
{
	int s= x+y;
	return s;
}
