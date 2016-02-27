//uri 1421 tic-tac-toe
#include <iostream>
#include <cstdio>
using namespace std;

//variables
int n,a,b,jumlah;
long i,p,t_case;
struct data {
	int top[31];
	char isi[31][31];
} stack;
bool get;

//functions
void empty();
int cek_baris(int baris); //ngecek sequence baris
int cek_kolom(int kolom); //ngecek sequence kolom
int cek_diagonal_dari_kiri_atas();
int cek_diagonal_dari_kanan_atas();

//main program
int main() {
	t_case=0;
	while (scanf("%d",&n)==1) {
		if (n!=0) {
			t_case++;
			empty();
			p=n*n*n;
			for (i=1; i<=p; i++) {
				scanf("%d %d",&a,&b);
				if (a<stack.top[b]) {
					stack.top[b]--;
					if (i%2==1)
						stack.isi[n-stack.top[b]+1][b]='b';
					else
						stack.isi[n-stack.top[b]+1][b]='a';
				}
				else {
					if (i%2==1) 
						stack.isi[a][b]='b';
					else
						stack.isi[a][b]='a';
				}
				/*for (int y=1; y<=n; y++) {
					for (int j=1; j<=n; j++) {
						printf("%c",stack.isi[y][j]);
					}
					printf("\n");
				}
				printf("\n");*/
			}	
			a=1;
			b=1;
			get=false;
			while ((a<=n) && (!get)) {
				if (stack.isi[a][b]=='b') {
					jumlah=cek_baris(a);
					if (jumlah==n) {
						get=true;
					}	
				}
				a++;
			}	
			a=1;
			b=1;
			while ((b<=n) && (!get)) {
				if (stack.isi[a][b]=='b') {
					jumlah=cek_kolom(b);
					if (jumlah==n) {
						get=true;
					}	
				}
				b++;
			}
			a=1;
			b=1;
			if ((stack.isi[a][b]=='b') && (!get)) {
				jumlah=cek_diagonal_dari_kiri_atas();
				if (jumlah==n) {
					get=true;
				}
			}
			a=1;
			b=n;
			if ((stack.isi[a][b]=='b') && (!get)) {
				jumlah=cek_diagonal_dari_kanan_atas();
				if (jumlah==n) {
					get=true;
				}
			}
			printf("Instancia %ld\n",t_case);
			if (get){
				printf("Branco ganhou\n");
			}
			else printf("Azul ganhou\n");
 		}
	}
	return 0;
}

//functions code
void empty() {
	int x;
	int y;
	for (x=1; x<=n; x++) {
		for (y=1; y<=n; y++) {
			stack.isi[x][y]='#';
		}
		stack.top[x]=n;
	}
}

int cek_baris(int baris) {
	int x=2;
	while ((x<=n) && (stack.isi[baris][x]==stack.isi[baris][x-1])) {
		x++;
	}	
	return x;
}

int cek_kolom(int kolom) {
	int x=2;
	while ((x<=n) && (stack.isi[x][kolom]==stack.isi[x-1][kolom])) {
		x++;
	}
	return x;
}

int cek_diagonal_dari_kiri_atas() {
	int x=2;
	int y=2;
	while ((x<=n) && (y<=n) && (stack.isi[x][y]==stack.isi[x-1][y-1])) {
		x++;
		y++;
	}
	return x;
}

int cek_diagonal_dari_kanan_atas() {
	int x=2;
	int y=n-1;
	while ((x<=n) && (y>=1) && (stack.isi[x][y]==stack.isi[x-1][y+1])) {
		x++;
		y--;
	}
	return x;
}
