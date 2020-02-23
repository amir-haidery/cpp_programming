#include<iostream>

using namespace std;

class shape{
	protected:
		int width;
		int height;
	public :
		void setWidth(int w)
		{
			width=w;
			}
		void setHeight(int h)
		{
			height=h;
				}		
};
class rectangle: public shape
{
     public:
     	int getArea()
     	{
     		return(width*height);
		 }
};
int main()
{
	rectangle rect;
	rect.setWidth(5);
	rect.setHeight(7);
	
	//print the Area of rectangle
	cout<<"Total Area  "<<rect.getArea()<<endl;
}

