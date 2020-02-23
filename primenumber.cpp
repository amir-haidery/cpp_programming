//w.a.g to cheack the number is prime number or not.
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i,num;
	bool isprime = true;
	cout<<"Enter the number to check is it prime number or not :"<<endl;
	cin>>num;
	
	for( i = 2 ; i <= num/2 ;++i)
	{ 
		if(num % i == 0)
		{
			isprime = false;
			break;
		}
	}
	if(isprime)
	cout<<"this is prime number "<<endl;
	else
	cout<<"This is not a prime number"<<endl;
	
	
	
}
