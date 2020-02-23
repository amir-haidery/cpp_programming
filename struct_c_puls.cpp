#include<iostream>

using namespace std;

struct person{
	char name[100];
	float age;
	char disgnation[50];
	double salary;
	
};
class employee{
	public :
		person p1[num];
		void Start()
		{
		
		}
	
		void details()
		{
			cout<<"person Details "<<endl<<"Enter your Name : "<<endl;
			getline(cin)
			cout<<endl<<"Enter your age :"<<endl;
			cin>>p1.age;
			cout<<endl<<"Enter the disgnation :"<<endl;
			fflush(stdin);
			cin.getline(p1.disgnation,50);
			cout<<endl<<"Enter your salary:"<<endl;
			cin>>p1.salary;

		}
		void dispaly()
		{
			cout<<"The person Details"<<endl<<endl;
			cout<<"Person name       :"<<p1.name<<endl;
			cout<<"Person  age       :"<<p1.age<<endl;
			cout<<"Person disgnation :"<<p1.disgnation<<endl;
			cout<<"Person salary     :"<<p1.salary<<endl;

		}
};

int main()
{
	employee E;
	E.details();
	E.dispaly();
	
	
	return 0;
	
}
