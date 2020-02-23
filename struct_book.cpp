#include<iostream>
#include<string>

using namespace std;

struct book{
	string name;
	int totalpage;
	string autor;
	float price;	 
}; 

int main()
{
	int num,i;
	cout<<"How many book details you want to save:";
	cin>>num;
	struct book b1[num];
	
	for(i=0;i<num;i++)
	{
		cout<<" Enter the "<< i+1 << " Book Details :"<<endl;
		fflush(stdin);
		cout<<"Enter the name of Book :"<<endl;
		getline(cin,b1[i].name);
		cout<<"Enter the name of Autor :"<<endl;
		fflush(stdin);
		cin>>b1[i].autor;
		cout<<"Enter the totalpage of book :"<<endl;
		fflush(stdin);
		cin>>b1[i].totalpage;
		cout<<"Enter the price of book :"<<endl;
		cin>>b1[i].price;
		
	}
		for(i=0;i<num;i++)
	{
		cout<<"The book Details you have Entered as fallow: "<<endl<<endl;
		cout<<"Book Name is :"<<b1[i].name<<endl;
		cout<<"Book Name is :"<<b1[i].autor<<endl;
		cout<<"Book Name is :"<<b1[i].totalpage<<endl;
		cout<<"Book Name is :"<<b1[i].price<<endl;
		
	}
}
