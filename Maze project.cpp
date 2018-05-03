#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string input = "";
	int maze [11][11] =  {{ 1,1,1,1,1,1,1,1,1,1,1},
					      { 1,2,0,0,1,0,0,0,0,0,1},
					      { 1,1,1,0,1,0,1,0,1,1,1},
					      { 1,0,0,0,1,0,1,0,0,0,1},
				  		  { 1,0,1,1,1,0,1,1,1,0,1},
					      { 1,0,1,0,0,0,1,0,0,0,1},
					      { 1,0,1,0,1,1,1,0,1,1,1},
					      { 1,0,1,0,0,0,1,0,0,0,1},
					      { 1,0,1,0,1,1,1,1,1,0,1},
					      { 1,0,0,0,1,0,0,0,0,0,1},
					      { 1,1,1,1,1,3,1,1,1,1,1}};
	string input = "";
	int posX = 1;
	int posY = 1;
	int Npos = 0;
	int Epos = 0;
	int Wpos = 0;
	int Spos = 0;
	char directon = '';
	int posNum = 2;
	char life = 'a';
	string onZero = " standing inside a hallway";
	string onOne  = " inside of a wall";
	string onTwo  = " "
	
}