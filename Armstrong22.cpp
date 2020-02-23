#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num,sum=0,rem;
	cout<<"Enter the number to find the number is Armstrong or not :"<<endl;
    cin>>num;
    
    int num2;
    num2=num;
       while(num!=0)
       {
           rem=num%10;
           sum=sum+rem*rem*rem;
           num/=10;
       }
       if(num2==sum)
       {
           cout<<"The number is Armstrong :"<<endl;
       }
       else
       {
           cout<<"The number is not Armstrong :"<<endl;
       }
    
    
}
