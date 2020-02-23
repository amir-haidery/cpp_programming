#include<iostream>
#include<string>

using namespace std;

struct person{
	string name;
	string disgnation;
	double salary;
		
};
int main()
{
//	struct person per;
	int num,i;
	cout<<"Enter the number of person that you want save the detail of them"<<endl;
	cin>>num;
	struct person per[num];
	for(i=0;i<num;i++)
	{
		cout<<endl<<"Enter"<< i+1 <<".person name :"<<endl;
		fflush(stdin);
		getline(cin,per[i].name);
		cout<<"Enter"<< i+1 <<".Disgnation :"<<endl;
		fflush(stdin);
		getline(cin,per[i].disgnation);
		cout<<"Enter"<< i+1 <<".Salary :"<<endl;
		fflush(stdin);
		cin>>per[i].salary;		
	}
	for(i=0;i<num;i++)
	{
		cout<<i+1<<".person"<<endl;
		cout<<"Name       :"<<per[i].name<<endl;
		cout<<"Disgnation :"<<per[i].disgnation<<endl;
		cout<<"Salary     :"<<per[i].salary<<endl;
		
	}
}
