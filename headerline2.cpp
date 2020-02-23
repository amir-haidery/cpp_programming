#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int i,num;
	
	cout<<"Enter the number of words that you want to Enter:"<<endl;
	char ch[100];
	cin.getline(ch,100);//take input from user as complete sentences
	
	
	ofstream myfile("ASIF.txt",ios::app);//create a file 
	myfile<<ch;//copy the senetens which we takeed like input from user
	myfile.close();//close the the file 
	cout<<"file write operation preformed succesfully:"<<endl;
	
	cout<<"Reading from file operation is start :"<<endl;
	char ch1[100];
	fstream obj("ASIF.txt");//open the file ASIF
	obj.getline(ch1,100);
	cout<<"array content :"<<ch1<<endl;
	cout<<"File reading operation completed. "<<endl;
	
	
}
