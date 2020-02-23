#include<iostream>
#include<conio.h>
using namespace std;
void swap(int x,int y)
{
	int temp;
	cout<<"In function the number is before swapping "<<x<<"\t"<<y<<endl;
	temp=x;
	x=y;
	y=temp;
	cout<<"Infunction the number is after swapping "<<x<<"\t"<<y<<endl;
}

int main()
{
	int num,num2;
	cout<<"Enter the two number :"<<endl;
	cin>>num>>num2;
	
	cout<<"in main the number is before swapping : "<<"num ="<<num<<"num2 ="<<num2<<endl;
	
	swap(num,num2);
	cout<<"in main the number after swapping "<<"num = "<<num<<"num2 = "<<num2<<endl;
	
	
}

