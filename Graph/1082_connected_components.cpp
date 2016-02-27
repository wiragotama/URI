#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

char visited[26];
int subGraph;
vector< vector<int> > result;

void dfs(vector < vector<int> > *adjList, int src) {
	
	result[subGraph].push_back(src);
	visited[src] = 1;
	for (int i=0; i<(*adjList)[src].size(); i++) {
		//printf("next = %d;  vis = %d\n",(*adjList)[src][i], visited[(*adjList)[src][i]]);
		//getchar();
		if (!visited[(*adjList)[src][i]]) {
			dfs(adjList, (*adjList)[src][i]);
		}
	}
	
}

int main() {
	int t, v, e;
	char src, dst, tmp;
	
	scanf("%d",&t);
	for (int z=1; z<=t; z++) {
		scanf("%d %d",&v, &e);
		
		vector< vector<int> > adjList;
		vector<int> dummy;
		result.clear();
		
		for (int i=0; i<v; i++) { //inisiasi adjList
			adjList.push_back(dummy);
			result.push_back(dummy);
		}
		
		
		
		for (int i=0; i<e; i++) {
			scanf("%c",&tmp);
			scanf("%c%c%c", &src, &tmp, &dst);
			adjList[src-'a'].push_back(dst-'a');
			adjList[dst-'a'].push_back(src-'a');
		}
		
		for (int i=0; i<26; i++) visited[i]=0; //set flag
		subGraph = 0;
		
		for (int i=0; i<v; i++) {
			if (!visited[i]) {
				visited[i] = 1;
				//printf("cibai %d\n", i);
				dfs(&adjList, i);
				subGraph++;
			}
		}
		
		printf("Case #%d:\n",z);
		for (int i=0; i<subGraph; i++) {
			if (result[i].size()>0) {
				sort(result[i].begin(), result[i].end());
				for (int j=0; j<result[i].size(); j++)
					printf("%c,",result[i][j]+'a');
			}
			printf("\n");
		}
		printf("%d connected components\n\n",subGraph);
	}
	return 0;
}
