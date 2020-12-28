import sys

class Node:
	def __init__(self, key):
		self.key = key
		self.neighbors = []

nodes = dict()

N, L = [int(x) for x in input().split(" ")]
for i in range(L):
	a, b = [int(x) for x in input().split(" ")]
	try:
		nodes[a]
	except:
		nodes[a] = Node(a)

	try:
		nodes[b]
	except:
		nodes[b] = Node(b)

	nodes[a].neighbors.append(b)
	nodes[b].neighbors.append(a)


visited = set()

def traversal(source, target):
	if not target in visited:
		visited.add(target)

		# if source != None:
		# 	global length
		# 	length += abs(source-target)
		
		# print(target, nodes[target].neighbors)
		for x in nodes[target].neighbors:
			traversal(target, x)

traversal(None, a)
# print(visited)
# print(length)

if visited != set(nodes.keys()):
	print("INCOMPLETO")
else:
	print("COMPLETO")
	