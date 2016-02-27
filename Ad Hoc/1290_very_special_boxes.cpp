//URI 1290 very special boxes
#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int x;
	int y;
	int z;
	int available;
} box;

int main() 
{	
	int n,m,x,y,z;
	while (scanf("%d %d",&n,&m)==2) 
	{
		if (!(n==0 && m==0)) 
		{	
			vector<box> boxes;
			
			int pesenan[3];
			for (int i=0; i<3; i++) 
			{
				scanf("%d",&pesenan[i]);
			}
			sort(pesenan,pesenan+3);
			
			int arr[3];
			for (int i=0; i<m; i++) 
			{
				for (int j=0; j<3; j++) 
				{
					scanf("%d",&arr[j]);
				}
				sort(arr,arr+3);
				
				//test ada apa ngga di vector
				bool found = false;
				int j=0;
				int len = boxes.size();
				while (!found && j<len)
				{
					if (boxes[j].x == arr[0] && boxes[j].y == arr[1] && boxes[j].z == arr[2])
					{
						found = true;
						boxes[j].available += 1;
					}
					else
						j++;
				}
				if (!found)  //tambah
				{
					box temp;
					temp.x = arr[0]; temp.y = arr[1]; temp.z = arr[2]; temp.available = 1;
					boxes.push_back(temp);
				}
			}
			
			int len = boxes.size();
			int dim = pesenan[0]*pesenan[1]*pesenan[2];
			int beda = -1;
			for (int i=0; i<len; i++)
			{
				int dim2 = boxes[i].x*boxes[i].y*boxes[i].z;
				//printf("%d %d %d %d\n",boxes[i].x, boxes[i].y, boxes[i].z, boxes[i].available);
				//cek ukuran dolo
				if (boxes[i].x >= pesenan[0] && boxes[i].y >=pesenan[1] && boxes[i].z >= pesenan[2])
				if ((dim2 >= dim) && boxes[i].available>=n) 
				{
					if (beda==-1 || (dim2-dim) < beda) 
					{
						beda = dim2-dim;
					}
				}
			}
			if (beda==-1)
				printf("impossible\n");
			else
				printf("%d\n",beda);
			boxes.clear();
		}
	}
	return 0;
}
