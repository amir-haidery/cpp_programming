#include<iostream>
#include<conio.h>

using namespace std;

 struct book{
	int bookid;
	char title[20];
	float price;
};
void display(book);
book input();

int main()
{
	cout<<" enter the id of book title and price"<<endl;
	struct book b1;
	b1=input();
	display(b1);
	getch();
	
}
void display(book b)
{
	cout<<"\nbookid \t title \t price"<<endl;
	cout<<"\n"<<b.bookid<<"\t"<<b.title<<"\t"<<b.price<<endl;
}
book input()
{
	book b;
	cin>>b.bookid>> b.title >> b.price;
	return(b);
}
