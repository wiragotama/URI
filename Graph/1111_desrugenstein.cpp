#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	int N, U, S, B, T;
	while (scanf("%d",&N)==1)
	{
		if (N!=0) {
			int adjMatrix[N*N][N*N];
			int V = N*N;
			for (int i=0; i<V; i++)
				for (int j=0; j<V; j++)
					adjMatrix[i][j] = 1000000000;

			for (int i=0; i<N; i++)
				for (int j=0; j<N; j++) {
					scanf("%d %d %d %d",&U,&S,&B,&T);
					if (U)
					{
						if (i-1>=0)
						{
							adjMatrix[i*N+j][(i-1)*N+j] = 1;
						}
					}
					if (S)
					{
						if (i+1<N)
						{
							adjMatrix[i*N+j][(i+1)*N+j] = 1;
						}
					}
					if (B)
					{
						if (j-1>=0)
						{
							adjMatrix[i*N+j][i*N+(j-1)] = 1;
						}
					}
					if (T)
					{
						if (j+1<N)
						{
							adjMatrix[i*N+j][i*N+(j+1)] = 1;
						}
					}

				}
			
			//floyd warshall
			for (int k=0; k<V; k++)
				for (int i=0; i<V; i++)
					for (int j=0; j<V; j++)
						adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k]+adjMatrix[k][j]);

			int Q;
			scanf("%d",&Q);
			for (int i=0; i<Q; i++)
			{
				scanf("%d %d %d %d",&U,&S,&B,&T);
				int src = U + (N-S-1)*N;
				int dest = B + (N-T-1)*N;
				if (adjMatrix[src][dest]!=1000000000)
					printf("%d\n",adjMatrix[src][dest]);
				else
					printf("Impossible\n");
			}
		}
	}
	return 0;
}