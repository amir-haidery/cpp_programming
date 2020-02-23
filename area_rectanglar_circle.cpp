#include<iostream>
#include<conio.h>
using namespace std;
int area(int *,int *);
float area(int);

int main()
{
	int r;
	cout<<"Enter the raduis :"<<endl;
	cin>>r;
	float A=area(r);
	cout<<"\nArea of circle is ="<<A<<endl;
	
	int l,b;
	cout<<"\nEnter the lenght and breadth of rectangle :"<<endl;
	cin>>l>>b;
	int a = area(&l,&b);
	cout<<" \n Area of rectangle is = "<<a<<endl;
	
	
}
int area(int *x,int *y)
{
	return(*x * *y);
}
float area(int r)
{
	return (3.14*r*r);
}
