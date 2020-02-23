#include<iostream>

using namespace std;

class Distance{
	private:
	int	meter;
	public:
		Distance()
		{
			meter=0;
		}
		void DisplayDatatype()
		{
			cout<<"meter value : "<<meter<<endl;
		}
		
	friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
	d.meter=d.meter+5;
}
int main()
{
	Distance d1;
	d1.DisplayDatatype();
	cout<<endl;
	//friend function called
	addValue(d1);
	d1.DisplayDatatype();
	return 0;
}
