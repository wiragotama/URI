import sys

n = int(input())
arr = [int(x) for x in input().split(" ")]

freq_dict = dict()
for i in range(n):
    try:
        freq_dict[arr[i]] += 1
    except:
        freq_dict[arr[i]] = 1

ans = 0
curr_gift = 1
for key in sorted(freq_dict):
    ans += curr_gift * freq_dict[key]
    curr_gift += 1
print(ans)