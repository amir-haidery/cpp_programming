#include<iostream>
#include<iostream>
#include<conio.h>

int sum(int,int);
using namespace std;

int main()
{
	int num1,num2,sum;
	cout<<" Enter the first number "<<endl;
	cin>>num1;
	cout<<"Enter the second number "<<endl;
	cin>>num2;
	cout<<"The sum of number is "<< sum(num1,num2);
	
}
int sum(int a,int b)
{
	int c=a+b;
	return c;
}#

using namespace std;

int main()
{
	char book[50];
	cout<<"Enter the favorite book name  "<<endl;
	cin.get(book,50);
	cout<<"You Entered  "<<book<<endl;
}

