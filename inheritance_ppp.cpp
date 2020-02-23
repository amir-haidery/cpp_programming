#include<iostream>

using namespace std;

class MyBaseClass{
	public:
		int x;
	MyBaseClass()
	{
		x=5;
		y=5;
		z=5;
	}
	void MyprotectedFunction()
	{
		cout<<"y : "<<y<<endl;
	}
	void MyprivateFunction()
	{
		cout<<"z : "<<z<<endl;		
	}
	protected:
	int y;
	private:
	int z;
		
};
void OutsideFunction(MyBaseClass obj)
{
	obj.MyprivateFunction();
	obj.MyprotectedFunction();
//	cout<<"X :"<<obj.x<<endl;
//	cout<<"Y :"<<obj.y<<endl;
//  cout<<"z :"<<obj.z<<endl;
}

int main()
{
	MyBaseClass obj;
//	cout<<"z: "<<obj.z<<endl;
//	obj.MyprotectedFunction();
	OutsideFunction(obj);
	
}
