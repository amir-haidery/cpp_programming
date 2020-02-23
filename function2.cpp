#include<iostream>

using namespace std;

int add2Number(int x,int y)
{
	int c=(x+y);
	return c;
}

int main()
{
	int num1,num2,sum;
	cout<<"Enter the two number to be add :"<<endl;
	cin>>num1>>num2;
//	sum=;
	cout<<"The sum of two number is :"<<add2Number(num1,num2)<<endl;
}
