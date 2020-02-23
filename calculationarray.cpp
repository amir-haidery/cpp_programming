#include<iostream>
using namespace std;

int main()
{
	int i,n;
	float sum=0.0,average,num[100];
	cout<<"Enter the number of Element :"<<endl;
	cin>>n;
	while(n > 100 || n <= 0)
	{
		cout<<"Error : number should have (1 - 100)"<<endl;
		cout<<"Enter the number again :"<<endl;
		cin>>n;
	}
	for(i=0;i<=n;i++)
	{
		cout<<i+1<<"Enter the number :";
		cin>>num[i];
		sum+=num[i];
	}
	average=sum/n;
	cout<<"Average number od Array is : "<<average;
	
	return 0;
}
