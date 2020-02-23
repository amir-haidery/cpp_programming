#include<iostream>
// #include<conio.h>.


using namespace std;

int main()
{
	int num,i,sum=0;
	cout<<"Enter the no element of Array :"<<endl;
    cin>>num ;
    int arr[num];
    cout<<"Enter the element of Array :"<<endl;
    for(i=0;i<=num;i++)
	{
	
        cin>>arr[i];
        sum+=arr[i];
    
	}
	cout<<"The elemets of Array are you entered :"<<endl;
	for(i=0;i<=num;i++)
	{
	
        cout<<arr[i]<<endl;
    
	}
	cout<<"The sum array is :"<<sum;
	
}
