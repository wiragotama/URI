//URI 1055 elegant permuted sum
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for(int t=1; t<=T; t++){
		int N,x[64];
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> x[i];
		}
		sort(x, x+N);

		int ans,p[2],v[2];
		p[0] = 1;
		p[1] = N-2;
		v[0] = x[0];
		v[1] = x[N-1];
		ans = abs(v[1]-v[0]);
		while(p[0]<=p[1]){
			int maxval=-1,maxp=-1,maxv=-1;
			for(int pi=0; pi<2; pi++)
			for(int vi=0; vi<2; vi++)
			{
				int diff = abs(v[vi] - x[p[pi]]);
				if(maxval < diff){
					maxval=diff; maxp=pi; maxv=vi;
				}
			}
			ans += maxval;
			v[maxv]=x[p[maxp]];
			if(maxp==0) p[0]++;
			if(maxp==1) p[1]--;
		}
		cout << "Case " << t << ": " << ans << endl;
	}
}
