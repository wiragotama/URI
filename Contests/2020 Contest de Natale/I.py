import sys
from copy import deepcopy
from collections import defaultdict 
   
#This class represents a directed graph using adjacency matrix representation 
class MaxFlow: 
    def __init__(self, graph): 
        self.graph = graph # residual graph 
        self.ROW = len(graph) 
   
    '''Returns true if there is a path from source 's' to sink 't' in 
    residual graph. Also fills parent[] to store the path '''
    def BFS(self,s, t, parent): 
  
        # Mark all the vertices as not visited 
        visited =[False]*(self.ROW) 
          
        # Create a queue for BFS 
        queue=[] 
          
        # Mark the source node as visited and enqueue it 
        queue.append(s) 
        visited[s] = True
           
         # Standard BFS Loop 
        while queue: 
  
            #Dequeue a vertex from queue and print it 
            u = queue.pop(0) 
          
            # Get all adjacent vertices of the dequeued vertex u 
            # If a adjacent has not been visited, then mark it 
            # visited and enqueue it 
            for ind, val in enumerate(self.graph[u]): 
                if visited[ind] == False and val > 0 : 
                    queue.append(ind) 
                    visited[ind] = True
                    parent[ind] = u 
  
        # If we reached sink in BFS starting from source, then return 
        # true, else false 
        return True if visited[t] else False


    # Returns tne maximum flow from s to t in the given graph 
    def FordFulkerson(self, source, sink): 

        # This array is filled by BFS and to store path 
        parent = [-1]*(self.ROW) 

        max_flow = 0 # There is no flow initially 

        # Augment the flow while there is path from source to sink 
        while self.BFS(source, sink, parent) : 

            # Find minimum residual capacity of the edges along the 
            # path filled by BFS. Or we can say find the maximum flow 
            # through the path found. 
            path_flow = float("Inf") 
            s = sink 
            while(s !=  source): 
                path_flow = min (path_flow, self.graph[parent[s]][s]) 
                s = parent[s] 

            # Add path flow to overall flow 
            max_flow +=  path_flow 

            # update residual capacities of the edges and reverse edges 
            # along the path 
            v = sink 
            while(v !=  source): 
                u = parent[v] 
                self.graph[u][v] -= path_flow 
                self.graph[v][u] += path_flow 
                v = parent[v] 

        return max_flow 


lines = []
for line in sys.stdin:
    lines.append(line.strip())

while len(lines) > 0:
    # N nodes and M edges
    N, M = [int(x) for x in lines.pop(0).split(" ")]
    graph = []
    for i in range(N+1): # +1 so we don't have the pain of index 0
        x = [0] * (N+1)
        graph.append(x)

    # edges inforamtion
    for i in range(M):
        src, tgt, capacity = [int(x) for x in lines.pop(0).split(" ")]
        graph[src][tgt] = capacity

    g = MaxFlow(graph)
    max_capacity = g.FordFulkerson(1, N)

    if max_capacity == 0:
        print("Nao eh possivel produzir nenhum brinquedo")
    else:
        print(max_capacity)
