#include<iostream>

using namespace std;

char Arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
char turn ='X';

void Displayboard()
{
			system("cls");	
			cout<<" \n\n\n\n\t\tT I C K   C O R E S S   G A M E   "  <<endl;
			
		    cout<<" \n\n\t\tPlayer 1[X]"<<endl;
	        cout<<"\t\tPlayer 2[O]"<<endl;
				 		
	 		cout<<"\n\n";
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t     "<<Arr[0][0]<<"    |     "<<Arr[0][1]<<"    |     "<<Arr[0][2]<<"    "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t__________|__________|__________"<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t     "<<Arr[1][0]<<"    |     "<<Arr[1][1]<<"    |     "<<Arr[1][2]<<"    "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t__________|__________|__________"<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t     "<<Arr[2][0]<<"    |     "<<Arr[2][1]<<"    |     "<<Arr[2][2]<<"    "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		cout<<"\t\t          |          |          "<<endl;
	 		
}
void playerTurn()
{
	int choice;
	if(turn =='X')
	cout<<" 1. Turn:";
	if(turn =='O')
	cout<<" 2. Turn:";
	 		
	cin>>choice;
	 		
	switch(choice)
	{
	  case 1: row=0;column=0;break;
	  case 2: row=0;column=1;break;
	  case 3: row=0;column=2;break;
	  case 4: row=1;column=0;break;
	  case 5: row=1;column=1;break;
	  case 6: row=1;column=2;break;
	  case 7: row=2;column=0;break;
	  case 8: row=2;column=1;break;
	  case 9: row=2;column=2;break;
		
		default:
	  cout<<"invalid choice"<<endl; 	
	}
	if(turn == 'X' && Arr[row][column]!='X' && Arr[row][column]!='O')
	{
		Arr[row][column]= 'X' ;
		turn='O';
	} 
	else if(turn == 'O' && Arr[row][column]!='X' && Arr[row][column]!='O')
	{
		Arr[row][column] = 'O';
		turn='X';
	}
	else
	{
		cout<<"Box already filled!"<<endl;
		playerTurn();
	}
	Displayboard();
}
bool GameOver()
{
	int i,j;
	for(i=0;i<3;i++)
	if(Arr[i][0]==Arr[i][1] && Arr[i][0]==Arr[i][2] || Arr[0][i]==Arr[1][i] && Arr[0][i]==Arr[2][0])
	return false;
	if(Arr[0][0]==Arr[1][1] && Arr[0][0]==Arr[2][2] || Arr[0][2]==Arr[1][1] && Arr[0][2]==Arr[2][0])
	return false;
	
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	if(Arr[i][j]!='X' && Arr[i][j]!='O')
	return true;
}
int main()
{
	while(GameOver())
	{
		
	Displayboard();
	playerTurn();
	
   }
   if(turn == 'X')
   {
   	cout<<"player 2[O] is win !! congratulation !!!"<<endl;
   }
      if(turn == 'O')
   {
   	cout<<"player 1[X] is win !! congratulation !!!"<<endl;
   }
   
   return 0;
   
}
