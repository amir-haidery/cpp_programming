#include<iostream>
// #include<conio>

using namespace std;

int main()
{
	int i,even=0,odd=0,num;
	cout<<"Enetr no of element that you want to insert:"<<endl;
	cin>>num;
	int arr[num];
	cout<<"Enter the elements of a Array :"<<endl;
	for(i=0;i<=num;i++)
	{
		cin>>arr[i];
	}
	cout<<"The element you have inserted are :"<<endl;
	for(i=0;i<=num;i++)
	{
		cout<<arr[i]<<"\t";
		if(i%2 ==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		cout<<"\n";
	}
	cout<<"The number of odd elements are :"<<odd<<endl;
	cout<<"The number of even number are :"<<even<<endl;
	
	
	
}
