#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	while (true) {
		int countZero = 0;

		int princess[3];
		for (int i=0; i<3; i++) {
			scanf("%d",&princess[i]);
			if (princess[i]==0) countZero++;
		}

		int prince[2];
		for (int i=0; i<2; i++) {
			scanf("%d",&prince[i]);
			if (prince[i]==0) countZero++;
		}

		if (countZero==5) break;
		else { //play
			sort(princess, princess+3);
			sort(prince, prince+2);
			bool flag = false;

			for (int card=1; card<=52 && !flag; card++) {
				int prince_copy[3];

				bool omit = false;
				for (int i=0; i<3; i++) if (card==princess[i]) omit=true;
				for (int i=0; i<2; i++) if (card==prince[i]) omit=true;

				if (!omit) {
					prince_copy[0] = prince[0]; prince_copy[1] = prince[1]; prince_copy[2] = card;
					sort(prince_copy, prince_copy+3);

					//simulate the play
					int used[3]; used[0]=0; used[1]=0; used[2]=0;
					int princess_wins = 0;
					for (int i=0; i<3; i++) {
						for (int j=0; j<3; j++) {
							if (princess[j]>prince_copy[i] && used[j]==0) {
								// cout << "winning princess " << princess[j] << " " << prince_copy[i] << endl;
								used[j] = 1;
								princess_wins++;
								break;
							}
						}
					}
					// cout << "card " << card << "   " << princess_wins << endl;
					if (princess_wins<=1) {
						flag = true;
						cout << card << endl;
					}
				}
			}
			if (!flag) cout << "-1" << endl;
			// cout << endl;
		}
	}
	return 0;
}