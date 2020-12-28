import sys

B = int(input())
G = int(input())

G = G // 2
if G % 2 == 1:
	G -= 1

if G > B:
	print("Faltam %d bolinha(s)" % (G-B))
else:
	print("Amelia tem todas bolinhas!")