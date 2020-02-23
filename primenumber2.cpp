#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num1,num2,i;
	bool flag=true;
	
	cout<<"Enter the number to check its prime number or not :"<<endl;
	
	cin>>num1>>num2;
	
	cout<<"The prime number from"<< num1 <<" to "<< num2 <<endl;
	
	for(int i=num1;i<=num2;i++)
	{
		//num1++;
		flag=true;
		for(int j=2; j<=i/2 ;j++)
		{
			
		
			if(i%j==0)
			{
				flag=false;
				break;
				
			}
			
	   }
	   if(flag)
	   {
	   	cout<< i <<" ";
	   }

	   
	}
	
}
