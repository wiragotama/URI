//uri 1259 even and odd
#include <iostream>
#include <cstdio>
using namespace std;

//functions and procedures
void quicksort_asc(long left, long right);
void quicksort_dsc(long left, long right);
void swap(long& x, long& y);

//variables
long num,even,odd,i,n;
long arr_even[1000000],arr_odd[1000000];

//main program
int main() {
	odd=-1;
	even=-1;
	scanf("%ld",&n);
	for (i=1; i<=n; i++) {
		scanf("%ld",&num);
		if (num%2==0) {
			even++;
			arr_even[even]=num;
		}		
		else {
			odd++;
			arr_odd[odd]=num;
		}
	}
	quicksort_asc(0,even);
	quicksort_dsc(0,odd);
	for (i=0; i<=even; i++) {
		printf("%ld\n",arr_even[i]);
	}
	for (i=0; i<=odd; i++) {
		printf("%ld\n",arr_odd[i]);
	}
	return 0;
}

void quicksort_asc(long left, long right) { //quicksort ascending

long left_r,right_r,pivot;
	
	left_r=left;
	right_r=right;
	pivot=arr_even[(left_r+right_r)/2];
	do {
		while (arr_even[left_r]<pivot)
			left_r++;
		while (arr_even[right_r]>pivot)
			right_r--;
		if (left_r<=right_r) {
			swap(arr_even[left_r],arr_even[right_r]);
			left_r++;
			right_r--;
		}
	} while (left_r<=right_r);
	if (left<right_r) quicksort_asc(left,right_r);
	if (right>left_r) quicksort_asc(left_r,right);
}

void quicksort_dsc(long left, long right) { //quicksort descending

long left_r,right_r,pivot;
	
	left_r=left;
	right_r=right;
	pivot=arr_odd[(left_r+right_r)/2];
	do {
		while (arr_odd[left_r]>pivot)
			left_r++;
		while (arr_odd[right_r]<pivot)
			right_r--;
		if (left_r<=right_r) {
			swap(arr_odd[left_r],arr_odd[right_r]);
			left_r++;
			right_r--;
		}
	}while (left_r<=right_r);
	if (left<right_r) quicksort_dsc(left,right_r);
	if (right>left_r) quicksort_dsc(left_r,right);
}

void swap(long& x, long& y) {
long temp;
	temp=x;
	x=y;
	y=temp;
}
