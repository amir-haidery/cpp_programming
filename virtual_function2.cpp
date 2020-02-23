#include<iostream>

using namespace std;
//baseclass
class Animal{
	public:
	virtual	void eat()
		{
			cout<<"I `m eating Genric food ."<<endl;
			
		}
};
//drived class
class Cat:public Animal{
	public:
     	void eat()
		{
			cout<<"Cat eats cat_Food."<<endl;
		}
};
//drived class
class Dog:public Animal{
	public:
		void eat()
		{
			cout<<"Dog eats Dog_food."<<endl;
		}
};
/*
void OutSideFunction(Animal *ptr)
{
	ptr->eat();
}
*/
int main()
{
	Animal *ptr;
	Animal AnimalObj;//make object of class
	Dog DogObj;//make object of class
	Cat CatObj;//make object of class
	ptr = &AnimalObj;//passing the reference in pointer
	ptr->eat();//pointer pont to the function
	ptr = &CatObj;	//passing the reference in pointer
	ptr->eat();
	ptr = &DogObj;//passing the reference in pointer
	ptr->eat();
	
	
}
