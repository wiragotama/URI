//URI 1147 knight scape
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	string str;
	int case_n = 1;
	while (getline(cin,str)) {
		if (str!="0") {
			int initial_x = str[0]-'1';
			int initial_y = str[1]-'a';
			int moveable = 0;

			int map[8][8];
			for (int i=0; i<8; i++)
				for (int j=0; j<8; j++)
					map[i][j]=0;

			for (int i=0; i<8; i++) {
				getline(cin,str);
				int x = str[0]-'1';
				int y = str[1]-'a';

				if ((x-1>=0) && (y-1>=0))
					map[x-1][y-1] = 1;
				if ((x-1>=0) && (y+1<8))
					map[x-1][y+1] = 1;
			}

			if ((initial_x+2<8) && (initial_y-1>=0) && map[initial_x+2][initial_y-1]==0)
				moveable++;
			if ((initial_x-2>=0) && (initial_y-1>=0) && map[initial_x-2][initial_y-1]==0)
				moveable++;
			if ((initial_x+1<8) && (initial_y-2>=0) && map[initial_x+1][initial_y-2]==0)
				moveable++;
			if ((initial_x-1>=0) && (initial_y-2>=0) && map[initial_x-1][initial_y-2]==0)
				moveable++;

			if ((initial_x+2<8) && (initial_y+1<8) && map[initial_x+2][initial_y+1]==0)
				moveable++;
			if ((initial_x-2>=0) && (initial_y+1<8) && map[initial_x-2][initial_y+1]==0)
				moveable++;
			if ((initial_x+1<8) && (initial_y+2<8) && map[initial_x+1][initial_y+2]==0)
				moveable++;
			if ((initial_x-1>=0) && (initial_y+2<8) && map[initial_x-1][initial_y+2]==0)
				moveable++;

			printf("Caso de Teste #%d: %d movimento(s).\n", case_n, moveable);
			case_n++;
		}
		else break;
	}
	return 0;
}