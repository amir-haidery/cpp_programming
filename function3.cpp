#include<iostream>

using namespace std;

int miximum(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}

int main()
{
	int num1,num2;
	cout<<"Enter the 2 number to find the miximum number :"<<endl;
	cin>>num1>>num2;
	cout<<"The miximum number is :"<<miximum(num1,num2)<<endl;
}
