//w.a.g to cheack the number is Armestrong number or not.
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i,num,rem,sum=0,originalnumber;
	cout<<"Enter the number to check is it prime number or not :"<<endl;
	cin>>originalnumber;
	num=originalnumber;
	while(num != 0)
	{
		rem = num%10;
		sum+= rem*rem*rem;
		num/=10;
		
	}
	if(sum==originalnumber)
	{
		cout<<"The number is Armstrong";
	}
	else
	{
		cout<<"The number is not Armstrong";
	}
	
}
