//uri 1121 sticker collector robot
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

//variable declarations
int row,col,i,j,position_x,position_y,sticker;
unsigned int p,instruction;
char arr[101][101],ins_code,face; //ins_code for instruction code
char kosong;

//function
bool check(char c) {
	if ((c=='N') || (c=='S') || (c=='L') || (c=='O')) 
		return true;
	else return false;
	//N for nouth S for south L for east O for west
}

//main program
int main() {
	while (scanf("%d %d %u",&row,&col,&instruction)==3) {
		if ((row!=0) && (col!=0) && (instruction!=0)){
			scanf("%c",&kosong); //scanning the enter line
			sticker=0;
			for (i=1; i<=row; i++) {
				for (j=1; j<=col; j++) {
					scanf("%c",&arr[i][j]);
					if (j==col) {
						scanf("%c",&kosong);
					}
					//printf("%d %d %c\n",i,j,arr[i][j]);
					if (check(arr[i][j])) {
						position_x=i; //collumn for x axis, right (+) left(-)
						position_y=j; //row for y axis, down (+) up (-)
						face=arr[i][j]; //the face direction of robot at first place
					}
				}
			}
			//printf("%c\n",face);
			for (p=1; p<=instruction; p++) {
				scanf("%c",&ins_code);
				//if (p==instruction) scanf("%c",&kosong);
				if (face=='N') { //north
					if (ins_code=='F') {
						if (position_x-1>=1) {
							if (arr[position_x-1][position_y]!='#') {
								arr[position_x][position_y]='.';
								position_x--;
							}
						}
					}
					else if (ins_code=='D') {
						face='L';
					}
					else face='O';
				}
				else if (face=='S') { //south
					if (ins_code=='F') {
						if (position_x+1<=row) {
							if (arr[position_x+1][position_y]!='#') {
								arr[position_x][position_y]='.';
								position_x++;
							}
						}
					}
					else if (ins_code=='D') {
						face='O';
					}
					else face='L';
				}
				else if (face=='L') { //L for east
					if (ins_code=='F') {
						if (position_y+1<=col) {
							if (arr[position_x][position_y+1]!='#') {
								arr[position_x][position_y]='.';
								position_y++;
							}
						}
					}
					else if (ins_code=='D') {
						face='S';
					}
					else face='N';
				}
				else { //west
					if (ins_code=='F') {
						if (position_y-1>=1) {
							if (arr[position_x][position_y-1]!='#') {
								arr[position_x][position_y]='.';
								position_y--;
							}
						}
					}
					else if (ins_code=='D') {
						face='N';
					}
					else face='S';
				}
				//printf("%c %d %d %c %c\n",ins_code,position_x,position_y,arr[position_x][position_y],face);
				if (arr[position_x][position_y]=='*') {
					sticker++;
					arr[position_x][position_y]='.';
				}
			}
			printf("%d\n",sticker);
		}
	}
	return 0;
}
