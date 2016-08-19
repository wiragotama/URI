//URI 1627 Last hit
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	for (int i=0; i<T; i++) {
		int At, Ad, Bt, Bd, H;
		scanf("%d %d %d %d %d",&At, &Ad, &Bt, &Bd, &H);
		
		int time = 1;
		string winner;
		while (H>0) {
			if (time%Ad==0 || time==1) {
				H -= At;
				//cout << "Time= " << time << "; Andre attacks= " << At << "; H= "<<H <<endl;
				if (H<=0) { cout << "Andre" << endl; }
			}

			if ((H>0) && (time%Bd==0 || time==1)) {
				H -= Bt;
				//cout << "Time= " << time << "; Beto attacks= " << Bt << "; H= "<<H <<endl;
				if (H<=0) { cout << "Beto" << endl; }
			}

			time++;
		}
	}
	return 0;
}