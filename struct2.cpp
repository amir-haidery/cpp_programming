#include<iostream>

using namespace std;

struct person{
	char name[100];
	float age;
	char disgnation[50];
	double salary;
	
};
void details(int num)
{
	int i;
//	struct person p1;
	struct person per[num];
	
	for(i=0;i<num;i++)
	{
	fflush(stdin);
	cout<<endl<<i+1<<".Person details"<<endl<<"Enter the name :";
	cin.getline(per[i].name,100);
	cout<<endl<<"Enter your age :"<<endl;
	fflush(stdin);
	cin>>per[i].age;
	cout<<endl<<"Enter the disgnation:"<<endl;
	fflush(stdin);
	cin.getline(per[i].disgnation,50);

	cout<<endl<<"Enter the salary :"<<endl;
	cin>>per[i].salary;
//	per[i]=p1;
    }
    for(i=0;i<num;i++)
    {
	cout<<endl<<i+1<<".The person Details"<<endl<<endl;
	cout<<"Person name       :"<<per[i].name<<endl;
	cout<<"Person  age       :"<<per[i].age<<endl;
	cout<<"Person disgnation :"<<per[i].disgnation<<endl;
	cout<<"Person salary     :"<<per[i].salary<<endl;
    }

}

int main()
{
	int item,i;
	cout<<"How many details of person do you want to seve :"<<endl;
	cin>>item;
	details(item);
	    
    
}
