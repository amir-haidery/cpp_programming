/*function overloading:
*function overloading is feature in c++ where two or more then two function can have same 
name but with the different parameter.
*function overloading can be  considered as example polymorphsim in c++ feature: */

#include<iostream>

using namespace std;

int add(int a,int b)
{
	cout<<"Function 1:"<<endl;
	return(a+b);
	
}
double add(double a,double b)
{
	cout<<"Function 2:"<<endl;
	return(a+b);
}
int add(int a,int b,int c)
{
	cout<<"Function 3:"<<endl;
	return(a+b+c);
}
double add(int a,double b)
{
	cout<<"Function 4:"<<endl;
	return(a+b);
}
double add(double a,int b)
{
	cout<<"Function 5:"<<endl;
	return(a+b);
	
}

int main()
{
	cout<<"Addition is :"<<add(4,5)<<endl;
	cout<<"Addition is :"<<add(12.23,12.12)<<endl;
	cout<<"Addition is :"<<add(23,3,4)<<endl;
	cout<<"Addition is :"<<add(4,23.45)<<endl;
	cout<<"Addition is :"<<add(12.23,12)<<endl;
}
