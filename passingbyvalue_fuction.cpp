/*pass by value : when we pass a arguement in function its just copy the value 
but the original value which is in the main fuction doesnot change */
#include<iostream>

using namespace std;

void PassByValue(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int a=5,b=6;
	cout<<"Before passing the value : \t a = "<< a << " b = "<< b<<endl;
	PassByValue(a,b);
	cout<<"After passing the value : \t a = "<< a << " b = "<< b<<endl;
	
	return 0;
}
