import sys

time = {
	"bonecos": 8,
	"arquitetos" : 4,
	"musicos" : 6,
	"desenhistas" : 12
}

time_all = {
	"bonecos": 0,
	"arquitetos" : 0,
	"musicos" : 0,
	"desenhistas" : 0
}

n = int(input())
for i in range(n):
	E, G, H = input().split(" ")
	time_all[G] += int(H)

ans = 0 # ans
for key, val in time_all.items():
	ans += val // time[key]
print(ans)