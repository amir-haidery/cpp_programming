#include<iostream>

using namespace std;
inline int add(int x,int y)
{
	
	int sum=(x+y);
	return sum;
	
}


int main()
{
	int num1,num2;
	cout<<"Enetr the two number :"<<endl;
	cin>>num1>>num2;
	cout<<"the sum number is ="<<add(num1,num2)<<endl;
	return 0;
	
}
