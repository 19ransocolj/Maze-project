#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) 
{
	int Maze [11][11] =  	{{ 1,1,1,1,1,1,1,1,1,1,1},		
				 { 1,2,0,0,1,0,0,0,0,4,1},
				 { 1,1,1,0,1,0,1,0,1,1,1},
				 { 1,0,0,0,1,0,1,0,0,0,1},
				 { 1,0,1,1,1,0,1,1,1,0,1},
				 { 1,0,0,0,0,0,1,0,0,0,1},
				 { 1,1,1,0,1,0,1,0,0,0,1},
				 { 1,0,1,0,0,4,1,0,0,0,1},
				 { 1,0,1,0,1,1,1,1,1,0,1},
				 { 1,0,0,0,1,0,0,0,0,0,1},
				 { 1,1,1,1,1,3,1,1,1,1,1}};
							/*
							int Maze [11][11] =  	{{ +,+,+,+,+,+,+,+,+,+,+},		
										 { +,S, , ,+, , , ,4,5,+},
										 { +,+,+, ,+, ,+, ,+, ,+},
										 { +, , , ,+, ,+, , , ,+},
										 { +, ,+,+,+, ,+,4,+, ,+},
									  	 { +, , , , , ,+, , , ,+},
										 { +,+,+,+,+, ,+, ,+,+,+},
										 { E, ,+, , ,4,+, , , ,+},
										 { +,6,+,+, ,+,+,+,+, ,+},
										 { +, , , , , , , , , ,+},
										 { +,+,+,+,+,+,+,+,+,+,+}};*/
	string input = "";
	int correctInput = 0;
	int posX = 1;
	int posY = 1;
	int Npos = 0;
	int Epos = 0;
	int Spos = 0; //never eat soggy waffles
	int Wpos = 0;
	char directon = 'n';
	int CurrentPosNum = 2;
	char life = 'a';
	string onZero 	= "You are standing inside a hallway";
	string onOne  	= "You are inside of a wall. ";
	string onTwo  	= "You are at the start of the maze";
	string onThree	= "You are at the end of the maze";
	string onFour	= "You are in a hole. ";
	string death 	= "Congratulations! You are dead. GAME OVER.";
	string victory 	= "Congratulations, you didn’t die, so you won.";
	string one 		= "+";
	string two 		= "B";
	string three 	= "E";
	string four 	= "H";
	string zero 	= " ";
	//cout << "You are at the start of the maze"<< endl;
	while (life == 'a')
	{
		
			//check objects around
			Npos = Maze[(posY-1)][posX];
			Epos = Maze[posY][(posX+1)];
			Spos = Maze[(posY+1)][posX];
			Wpos = Maze[posY][(posX-1)];
			CurrentPosNum = Maze [posY][posX];
			
			
			// harmless Death Check to stop errors
			cout << " ";
			if (CurrentPosNum == 0)
			{
			
			}
			else if (CurrentPosNum == 1)
			{	
			life = 'd';	
			goto A;		
			}
			else if (CurrentPosNum == 2) 
			{
			
			}
			else if (CurrentPosNum == 3)
			{
			life = 'w';
			goto A;
			}
			else if (CurrentPosNum == 4)
			{
			life = 'd';
			goto A;
			}


			//North position check
	

		cout <<"\t    N"<< endl;
			
		cout << "\t    ";
		if (Npos == 0)
			{
			cout << zero;
			}
			else if (Npos == 1)
			{
			cout << one;
			}
			else if (Npos == 2)
			{
			cout << two;
			}
			else if (Npos == 3)
			{
			cout << three;
			}
			else if (Npos == 4)
			{
			cout << four;
			}
			else 
			{
			cout << "Nothing" << endl;
			}
			cout << "\t\t"<<endl;
			
			
	//West position check	
			cout << "\tW " ;
			if (Wpos == 0)
				{
				cout << zero;
				}
				else if (Wpos == 1)
				{
				cout << one;
				}
				else if (Wpos == 2)
				{
				cout << two;
				}
				else if (Wpos == 3)
				{
				cout << three;
				}
				else if (Wpos == 4)
				{
				cout << four;
				}
				else 
				{
				cout << "Nothing";
				}
	// Death Check
				cout << " ";
				if (CurrentPosNum == 0)
				{
				cout << zero;
				}
				else if (CurrentPosNum == 1)
				{		
				cout << one;
				life = 'd';
				}
				else if (CurrentPosNum == 2) 
				{
				cout << two;
				}
				else if (CurrentPosNum == 3)
				{
				cout << three;
				life = 'w';
				}
				else if (CurrentPosNum == 4)
				{
				cout << four << endl;
				life = 'd';
				}
				else 
				{
				cout << "Error" << endl;
				}
	//East position check
			cout << " " ;
			if (Epos == 0)
			{
				cout << zero;
				}
				else if (Epos == 1)
				{		
				cout << one;
				}
				else if (Epos == 2) 
				{
				cout << two;
				}
				else if (Epos == 3)
				{
				cout << three;
				}
				else if (Epos == 4)
				{
				cout << four;
				}
				else 
				{
				cout << "Nothing";
			}
				cout << " E\t" <<"\t\t + = wall \t B = Beginning of maze \t H = A hole \t \" \" = A Hallway \t E = The end of the maze"<<endl;
			
			//South position check
			cout << "\t    " ;
			if (Spos == 0)
			{
				cout << zero;
				}
				else if (Spos == 1)
				{		
				cout << one;
				}
				else if (Spos == 2) 
				{
				cout << two;
				}
				else if (Spos == 3)
				{
				cout << three;
				}
				else if (Spos == 4)
				{
				cout << four;
				}
				else 
				{
				cout << "Nothing";
			}
				cout << "\t\t"<< endl;
				cout << "\t    S"<< endl;
			
		
					//User Prompts and stuff
	
					cout <<"To go north, east, south or west, enter \"N\", \"E\", \"S\", or \"W\", capitalized or not." << endl;
					cin >> input;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					cout << endl;
					transform (input.begin(), input.end(), input.begin(), ::tolower);
					
					//nnnnever… eat soggy waffles...
					
					if (input == "n")
					{
						posY -=1;
						correctInput = 1;
						}
						else if (input == "e")
						{
						posX +=1;
						correctInput = 1;
						}
						else if (input == "s")
						{
						posY +=1;
						correctInput = 1;
						}
						else if (input == "w")
						{
						posX -= 1;
						correctInput = 1;
						}
						else
						{
						cout << "Please enter a correct input"<< endl;
					}}
//cout << posX << "  " << posY<<endl;
					

				//cout << "done" << endl;
		
	//}
	A:
		if (life == 'd'){
			if (CurrentPosNum == 4){
				cout << onFour << death << endl;
				}
				else {
					cout << onOne << death << endl;
				}
		}else if (life == 'w'){
			cout << victory << endl;
		}else {
			cout << "This is an error fix it..." << endl;
		
	}}
	/*
	int Maze [11][11] =  	{{ 1,1,1,1,1,1,1,1,1,1,1},
				 { 1,2,0,0,1,0,0,0,0,4,1},
				 { 1,1,1,0,1,0,1,0,1,1,1},
				 { 1,0,0,0,1,0,1,0,0,0,1},
				 { 1,0,1,1,1,0,1,1,1,0,1},
				 { 1,0,1,0,0,0,1,0,0,0,1},
				 { 1,0,1,0,1,1,1,0,1,1,1},
				 { 1,0,1,0,0,4,1,0,0,0,1},
				 { 1,0,1,0,1,1,1,1,1,0,1},
				 { 1,0,0,0,1,0,0,0,0,0,1},
				 { 1,1,1,1,1,3,1,1,1,1,1}};
								*/
