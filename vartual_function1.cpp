#include<iostream>

using namespace std;

class MyBase{
	public:
		void show()
		{
			cout<<"Base class show function call "<<endl;
		}
		void print()
		{
			cout<<"Base class print function call "<<endl;
		}
};
class MyDrived : public MyBase{
	public:
		void show()
		{
			cout<<"Drived class show function call "<<endl;
		}
		void print()
		{
			cout<<"Drived class print function call "<<endl;
		}	
};
void OutSide(MyBase *ptr2)
{
	ptr2->print();
}

int main()
{
	MyBase *Baseptr;
	MyDrived DrivedObj;
	
//	Baseptr = &DrivedObj;
	OutSide(Baseptr);
	Baseptr->print();
	Baseptr->show();
	
}
