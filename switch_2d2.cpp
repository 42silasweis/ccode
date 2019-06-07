// skw 8x8
// compile gcc switch_2d2.cpp -o switch_2d2.o
// ./switch_2d2.o
// switch_2d2.cpp
#include <iostream>
#include <stdio.h>
int skw(); //define int skw(); function

int main()
{
	skw(); //call skw function
	return 0;
}
//start of skw() function
int skw(){
		int r,c;//row and column
		int red, green, blue;
		int val = 0;
		int m[8][8] = {
			{0,1,2,3,4,0,0,0} ,
			{1,0,0,0,0,0,0,0} ,
			{2,0,0,0,0,0,0,0} ,
			{3,0,0,0,0,0,0,0} ,
			{4,2,0,3,3,0,2,0} ,
			{0,2,0,0,0,0,2,0} ,
			{0,2,0,3,3,0,2,0},
			{0,0,0,0,0,0,0,0}
		};

			red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
				val = m[r][c];
				switch (val) {
				case 1:
				  red = 0; green = 0; blue = 0;
				  break;
				case 2:
				  red = 0; green = 0; blue = 0;
				  break;
				case 3:
				  red = 0; green = 0; blue = 0;
				  break;
				default:
				  red = 0; green = 0; blue = 0;
				  break;
				}
				std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
			} //end c
			std::cout<<"\n";
		}//end r
	return 0;
}
