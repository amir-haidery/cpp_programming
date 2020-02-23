#include<iostream>
#include<conio.h>

using namespace std;

int checkprimenumber(int n);

int main()
{
	int num1,num2;
	bool flag;
	
	cout<<"Enter the two positive integer : "<<endl;
	cin>>num1>>num2;
	
	cout<<"Prime number between "<< num1<<" and "<<num2<<endl;
	for(int i=num1;i<=num2;i++)
	{
		flag=checkprimenumber(i);
		if(flag)
		
			cout<< i <<" ";
		
	}
	return 0;
}
int checkprimenumber(int n)
{
	bool flag = true;
	
	
	for(int j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			flag=false;
			break;
			
		}
	}
	return flag;
	
	
	
	
}
