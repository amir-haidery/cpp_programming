/*pass by reference : the pass/call by Address is method of passing the argument to a function the Address
of argument copied in the formal paramerter
inside the function the Address is used to access the actual argument this  means that change made in the parameter
and effect pass argument   */
#include<iostream>

using namespace std;

void PassByValue(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int a=5,b=6;
	cout<<"Before passing the Address : \t a = "<< a << " b = "<< b<<endl;
	PassByValue(&a,&b);
	cout<<"After passing the Address   : \t a = "<< a << " b = "<< b<<endl;
	
	return 0;
}
