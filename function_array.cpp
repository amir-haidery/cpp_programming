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
	person p1;
	for(int i=0;i<num;i++)
	{
	
 	cout<<"person Details "<<endl<<"Enter your Name : "<<endl;
	cin>>(p1.name,100);
	cout<<endl<<"Enter your age :"<<endl;
	cin>>p1.age;
	cout<<endl<<"Enter the disgnation :"<<endl;
	fflush(stdin);
	cin>>(p1.disgnation,50);
	cout<<endl<<"Enter your salary:"<<endl;
	cin>>p1.salary;
	p2[i] = p1;
  }
	cout<<"The person Details"<<endl<<endl;
	cout<<"Person name       :"<<p1.name<<endl;
	cout<<"Person  age       :"<<p1.age<<endl;
	cout<<"Person disgnation :"<<p1.disgnation<<endl;
	cout<<"Person salary     :"<<p1.salary<<endl;

}
int main()
{
	int num;
	cout<<"How many details of person do you want to seve :"<<endl;
	cin>>num;
	details(num);
	
	
}
