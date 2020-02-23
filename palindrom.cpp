#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num,n,digits,rev=0;
	cout<<"Enter the number :"<<endl;
	cin>>num;
	
	n=num;
	while(num !=0)
	{
		digits=num%10;
		rev=(rev*10) + digits;
		num=num/10;
	}
	cout<<"The reverse of number is = "<<rev<<endl;
	if(n==rev)
	{
		cout<<"The "<<n<<" is palindrom"<<endl;
	}
	else
	{
		cout<<"The "<<n<<" is not palindrom"<<endl;
	}
 } 
