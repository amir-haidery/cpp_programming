#include<iostream>
#include<conio.h>

void naturalnumber(int s,int e);

using namespace std;

int main()
{
	int start,end;
	cout<<"Enter the start and end point of natural number :"<<endl;
	cin>>start>>end;
	
	naturalnumber(start,end);
	return 0;
}
void naturalnumber(int s,int e)
 {
 	while(s<=e)
 	{
 		cout<<s<<"\t";
 		s++;
	 }
 }
