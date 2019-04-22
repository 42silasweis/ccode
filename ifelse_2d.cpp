// compile gcc ifelse_2d -o ifelse_2d.o
// ./ifelse_2d.o
// ifelse_2d.cpp
#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		char thechar;
		char w = '<';
		char x = '>';
		char y = '*';
		char z = '?';
		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,0,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0},
			{0,0,0,0,0,0,0,0}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			  if (val == 1){
					thechar = w;}
					elseif (val == 2){
						thechar = x;}
					else if (val == 3){
						thechar = y;}
					else{
						thechar = z;}
					cout<<thechar;
			} //end c
			cout<<"\n";
		}//end r
	return 0;
}
