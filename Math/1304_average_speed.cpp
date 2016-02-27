//URI 1304 average speed
#include <iostream>
#include <cstdio>
using namespace std;

int getSpeed(string str) 
{
	int len = str.length();
	int speed = 0;
	for (int i=9; i<len; i++)
	{
		speed = speed*10;
		speed+= str[i]-'0';
	}
	return speed;
}

int convertTimeIntoSecond(string str)
{
	int hour, minute, second;
	hour = (str[0]-'0')*10+(str[1]-'0');
	minute = (str[3]-'0')*10 + (str[4]-'0');
	second = (str[6]-'0')*10 + (str[7]-'0');
	return hour*3600+minute*60+second;
}

int main()
{
	string str, previous="";
	double traveledDistance = 0;
	int speed = 0;
	while (getline(cin, str))
	{
		if (str.length()>9) {
			int currentTime = convertTimeIntoSecond(str);
			int prevTime = 0;
			if (previous!="")
				prevTime = convertTimeIntoSecond(previous);
			traveledDistance += ((double)(currentTime-prevTime)/3600.0)*(double)speed;
			speed = getSpeed(str);
		}
		else { //query
			int currentTime = convertTimeIntoSecond(str);
			int prevTime = 0;
			if (previous!="")
				prevTime = convertTimeIntoSecond(previous);
			traveledDistance += ((double)(currentTime-prevTime)/3600.0)*(double)speed;
			cout << str << " ";
			printf("%.2lf km\n",traveledDistance);
		}
		previous = str;
	}
	return 0;
}