#include<iostream>
using namespace std;

int main()
{
	int i,num;
	cout<<"Enter the number of elements:"<<endl;
	cin>>num;
	int n[num];
	for(i=0;i<num;i++)
	{
		cout<<i+1<<".Enter number :"<<endl;
		cin>>n[i];
	}
	for(i=0;i<=num;i++)
	{
		if(n[0] < n[i])
		{
			n[0]=n[i];
		}
	}
	cout<<"The largest number of Array is "<<n[0];
	
}
