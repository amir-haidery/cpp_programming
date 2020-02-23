/*using inline fuction
*that mean its doesnt pass anything 
*whenever we call the function it directly copy the whole function in main function */
#include<iostream>
using namespace std;
inline int add(int x,int y)
{
	
	return (x+y);

	
}


int main()
{
	int num1,num2;
	cout<<"Enetr the two number :"<<endl;
	cin>>num1>>num2;
	cout<<"the sum number is ="<<add(num1,num2)<<endl;
	return 0;
	
}
