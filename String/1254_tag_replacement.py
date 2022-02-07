import sys
import re

def split_tags(ori_string):
	series = []
	temp = ""
	lp = -1 # number of left parenthesis
	rp = -1 # number of right parenthesis
	
	for item in ori_string:
		if item == "<" and lp==-1:
			if temp!="":
				series.append( (temp, False) )
				temp = ""
			lp = 1
			rp = 0
		elif item == "<" and lp!=-1:
			lp +=1
		elif item == ">" and lp!=-1:
			rp += 1

		temp += item
		if lp!=-1 and rp!=-1 and lp == rp: # potential tag
			if lp==1 and rp==1: # valid tag
				series.append( (temp, True) ) 
				lp = -1
				rp = -1
				temp = ""
			else: # invalid tag, reset 
				lp=-1
				rp=-1
	
	if temp!="": # remaining string
		series.append( (temp, False) ) # invalid tags (or just a normal text)

	return series

for target in sys.stdin:
	replacement = input()
	ori_string = input()
	
	target = target.strip()
	replacement = replacement.strip()
	ori_string = ori_string

	series = split_tags(ori_string)
	result = ""
	for i in range(len(series)):
		if series[i][1]:
			regex = re.compile(target, re.IGNORECASE)
			result += regex.sub(replacement, series[i][0])
		else:
			result += series[i][0]
	print(result)
	