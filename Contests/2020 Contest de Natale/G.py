import sys
import operator as op
from functools import reduce

def nCr(n, r):
    r = min(r, n-r)
    numer = reduce(op.mul, range(n, n-r, -1), 1)
    denom = reduce(op.mul, range(1, r+1), 1)
    return numer // denom  # or / in Python 2

n = int(input())
for i in range(n):
	a, b, c = [int(x) for x in input().split(" ")]
	c = float(c/100)
	res = nCr(a,b) * c**b * (1-c)**(a-b) * 100.0
	print("A chance de Basy acertar o numero no dia %d eh %.2lf%%" % (i+1, res))